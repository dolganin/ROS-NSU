import sys

import rclpy
from rclpy.node import Node
from fullnameservice.srv import Nameservice

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Nameservice, 'concat_three_names')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = Nameservice.Request()

    def send_request(self, first_name, name, last_name):
        self.req.first_name = first_name
        self.req.last_name = last_name
        self.req.name =  name
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request(sys.argv[1], sys.argv[2], sys.argv[3])
    minimal_client.get_logger().info(
        'Result of summ_full_name: for %s + %s + %s = %s' %
        (sys.argv[1], sys.argv[2], sys.argv[3], response.full_name))
    
     # minimal_client.get_logger().info(
      #  'Result of add_two_ints: for %d + %d = %d' %
       # (int(sys.argv[1]), int(sys.argv[2]), response.sum))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()