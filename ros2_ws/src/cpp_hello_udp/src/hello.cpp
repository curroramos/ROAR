#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

// Set the IP address and port of the Arduino
struct in_addr arduino_ip;
unsigned int arduino_port = 1883;

int udp_socket;

int main() {
  // Set up the UDP socket
  udp_socket = socket(AF_INET, SOCK_DGRAM, 0);
  if (udp_socket < 0) {
    perror("socket creation failed");
    exit(EXIT_FAILURE);
  }

  arduino_ip.s_addr = inet_addr("10.0.0.9");
  struct sockaddr_in server_address;
  server_address.sin_family = AF_INET;
  server_address.sin_addr = arduino_ip;
  server_address.sin_port = htons(arduino_port);

  // Send messages via UDP
  while (true) {
    std::string message = "Hello, Arduino!";
    int bytes_sent = sendto(udp_socket, message.c_str(), message.size(), 0, (struct sockaddr*)&server_address, sizeof(server_address));
    if (bytes_sent < 0) {
      perror("sendto failed");
      exit(EXIT_FAILURE);
    }
    sleep(1);
    printf("Sent message: %s\n", message.c_str());
  }

  return 0;
}