#include "config/logconfiguration.h"

using namespace strayflux;

/**
 * @brief Tests the getters and setters
 */
TEST(LogConfiguration, GetterSetter) {
    config::LogConfiguration myConfig;
    
    myConfig.setPath("/my/test/path");
    EXPECT_EQ(myConfig.getPath(), "/my/test/path");
    
    myConfig.setName("test123");
    EXPECT_EQ(myConfig.getName(), "test123");
}
/**
 * @brief Tests the default configuration load
 */
TEST(LogConfiguration, LoadDefault) {
    config::LogConfiguration myConfig;
    
    EXPECT_EQ(myConfig.getName(), "default");
    EXPECT_EQ(myConfig.getPath(), "strayfluxinteractive/strayflux/conf/default.logcfg");
    EXPECT_NO_THROW(myConfig.load());
}
/**
 * @brief Tests the load of a log configuration
 */
TEST(LogConfiguration, Load) {
    config::LogConfiguration myConfig("test", "strayfluxinteractive/strayflux/test/data/test.logcfg");
    
    EXPECT_EQ(myConfig.getName(), "test");
    EXPECT_EQ(myConfig.getPath(), "strayfluxinteractive/strayflux/test/data/test.logcfg");
    EXPECT_NO_THROW(myConfig.load());
}
/**
 * @brief Tests the save of a log configuration
 */
TEST(LogConfiguration, Save) {
    config::LogConfiguration myConfig("test", "strayfluxinteractive/strayflux/test/data/test.logcfg");
    
    EXPECT_EQ(myConfig.getName(), "test");
    EXPECT_EQ(myConfig.getPath(), "strayfluxinteractive/strayflux/test/data/test.logcfg");
    
    myConfig.save();
}
