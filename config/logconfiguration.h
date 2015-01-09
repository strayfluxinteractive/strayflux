#ifndef LOGCONFIG_H  // LOGCONFIG_H
#define LOGCONFIG_H

#include "config/configuration.h"
#include "logger/easylogging++.h"
#include <string>

namespace strayflux {
namespace config {

/**
 * @brief Handles the configuration of the easylogger
 * @details Loads the configuration for easylogger
 */
class LogConfiguration : public Configuration {
    public:
        /**
         * @brief Creates a log configuration with a default setup
         */
        LogConfiguration();
        /**
         * @brief Creates a log configuration with a specified setup
         * 
         * @param name Name of configuration
         * @param path Path to configuration
         */
        LogConfiguration(std::string name, std::string path);
        /**
         * @brief Destroys the configuration object
         */
        ~LogConfiguration();
        /**
         * @brief Loads configuration from disk and configures easylogger
         */
        void load();
        /**
         * @brief TODO Nothing right now
         */
        void save();
        /**
         * @brief Gets the name of logger
         * 
         * @return std::string Name of logger
         */
        std::string getName() const;
        /**
         * @brief Sets the name of the logger
         * 
         * @param name Name of logger
         */
        void setName(std::string name);
    private:
        /**
         * Name of the logger
         */
        std::string _name;
};


} // config
} // strayflux
#endif // LOGCONFIG_H
