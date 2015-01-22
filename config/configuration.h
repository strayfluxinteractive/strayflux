#ifndef CONFIG_H  // CONFIG_H
#define CONFIG_H

#include <string>

namespace strayflux {
namespace config {

/**
 * @brief Abstract class for configurations
 * 
 * @details Class which will define the functionalities of all configuration 
 * files and will be derived to create specific config handling
 */
class Configuration {
    public:
        /**
         * @brief Creates a basic configuration object
         */
        Configuration();
        /**
         * @brief Destroys the configuration object
         */
        virtual ~Configuration() = 0;
        /**
         * @brief Saves the configuration to disk
         */
        virtual void save() = 0;
        /**
         * @brief Loads configuration from disk
         */
        virtual void load() = 0;
        /**
         * @brief Gets the current path name
         * 
         * @return std::string Path of config file
         */
        std::string getPath() const;
        /**
         * @brief Sets the path name
         * 
         * @param path Path to config file 
         */
	    void setPath(std::string path);
    private:
        /**
         * Path to config file
         */
        std::string _path;
};

} // config
} // strayflux

#endif // CONFIG_H
