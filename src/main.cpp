#include <fmt/format.h>
#include <grpcpp/grpcpp.h>

#include "helloworld.grpc.pb.h"

int main() {
  // Create a HelloWorld greeter stub, this isn't a gRPC tutorial, just
  // demonstrating we can do it
  auto channel = grpc::CreateChannel("localhost:50051",
      grpc::InsecureChannelCredentials());
  auto greeter_stub = helloworld::Greeter::NewStub(channel);

  fmt::println("Hello from gRPC");
}
