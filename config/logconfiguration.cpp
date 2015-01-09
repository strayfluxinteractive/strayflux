#include "config/logconfiguration.h"

namespace strayflux {
namespace config {

/**
 * @brief Creates a log configuration with a default setup
 * @details Sets default name and path
 */
LogConfiguration::LogConfiguration() {
    setName("default");
    setPath("strayfluxinteractive/strayflux/conf/default.logcfg");
}
/**
 * @brief Creates a log configuration with a specified setup
 * 
 * @param name Name of configuration
 * @param path Path to configuration
 * 
 * @details Sets name and path to specified values
 */
LogConfiguration::LogConfiguration(std::string name ,std::string path) {
    setName(name);
    setPath(path);
}
/**
 * @brief Destroys the configuration object
 * 
 * @details Nothing :)
 */
LogConfiguration::~LogConfiguration() {
    
}
/**
 * @brief Loads configuration from disk and configures easylogger
 * 
 * @details Loads configuration file using easylogging interface and updates the
 * named logger using easylogging
 */
void LogConfiguration::load() {
    el::Configurations configFile(getPath());
    el::Loggers::reconfigureLogger(getName(), configFile);
}
/**
 * @brief TODO Nothing right now
 *
 * @details Nothing :)
 */
void LogConfiguration::save() {
    
}
/**
 * @brief Gets the name of logger
 * 
 * @return std::string Name of logger
 * 
 * @details Get the _name
 */
std::string LogConfiguration::getName() const {
    return _name;
}
/**
 * @brief Sets the name of the logger
 * 
 * @param name Name of logger
 * 
 * @details Sets the name
 */
void LogConfiguration::setName(std::string name) {
    _name = name;
}

} // config
} // strayflux
