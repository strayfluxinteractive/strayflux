#include "config/configuration.h"

namespace strayflux {
namespace config {

/**
 * @brief Creates a basic configuration object
 * @details Sets a default path
 */
Configuration::Configuration() {
    setPath("strayfluxinteractive/strayflux/conf");
}
/**
 * @brief Destroys the configuration object
 */
Configuration::~Configuration() {
    // override stub    
}
/**
 * @brief Gets the current path name
 * @details Access the _path variable
 * @return std::string Path of config file
 */
std::string Configuration::getPath() const {
    return this->_path;
}
/**
 * @brief Sets the path name
 * @details Updates the _path variable
 * 
 * @param path Path to config file 
 */
void Configuration::setPath(std::string path) {
    this->_path = path;
}

} // config
} // strayflux
