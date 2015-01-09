#include "config/configuration.h"

Configuration::Configuration() {
    setPath("strayfluxinteractive/strayflux/conf");
}

Configuration::~Configuration() {
    // override stub    
}

std::string Configuration::getPath() const {
    return this->_path;
}
void Configuration::setPath(std::string path) {
    this->_path = path;
}