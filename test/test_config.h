#include "config/logconfiguration.h"


_INITIALIZE_EASYLOGGINGPP
TEST(Configuration, GetterSetter) {
    
    LogConfiguration myConfig;
    
    myConfig.setPath("/my/test/path");
    EXPECT_EQ(myConfig.getPath(), "/my/test/path");
    
}