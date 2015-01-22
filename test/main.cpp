#include "google/gmock/gmock.h"
// Include your tests here
#include "test/test_config.h"

_INITIALIZE_EASYLOGGINGPP
int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}