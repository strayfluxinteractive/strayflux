#include "config/logconfiguration.h"

TEST(LogConfiguration, GetterSetter) {
    LogConfiguration myConfig;
    
    myConfig.setPath("/my/test/path");
    EXPECT_EQ(myConfig.getPath(), "/my/test/path");
    
    myConfig.setName("test123");
    EXPECT_EQ(myConfig.getName(), "test123");
}

TEST(LogConfiguration, LoadDefault) {
    LogConfiguration myConfig;
    
    EXPECT_EQ(myConfig.getName(), "default");
    EXPECT_EQ(myConfig.getPath(), "default.logcfg");
}

TEST(LogConfiguration, Load) {
    LogConfiguration myConfig("test", "test.logcfg");
    
    EXPECT_EQ(myConfig.getName(), "test");
    EXPECT_EQ(myConfig.getPath(), "test.logcfg");
}

TEST(LogConfiguration, Save) {
    LogConfiguration myConfig("test", "test.logcfg");
    
    EXPECT_EQ(myConfig.getName(), "test");
    EXPECT_EQ(myConfig.getPath(), "test.logcfg");
    
    myConfig.save();
}