#include <iostream>
#include <string>

#include "ignition/transport.hh"

#include "ign_transport_echo_test/proto/echo.pb.h"

namespace {

auto constexpr kEchoServiceTopic = "/echo";

void EchoServiceHandler(const ign_transport_echo_test::proto::EchoRequest &request,
                        ign_transport_echo_test::proto::EchoReply &reply,
                        bool &result) {
  reply.set_value(request.value());
  result = true;
}

}  // namespace

int main (int argc, char *argv[]) {
  std::cout << "Available network interfaces:" << std::endl;
  for (const auto &interface : ignition::transport::determineInterfaces()) {
    std::cout << "\t" << interface << std::endl;
  }
  ignition::transport::Node node;
  if (!node.Advertise(kEchoServiceTopic, &EchoServiceHandler)) {
    std::cerr << "Error advertising [" << kEchoServiceTopic << "]" << std::endl;
    return -1;
  }
  ignition::transport::waitForShutdown();
  return 0;
}
