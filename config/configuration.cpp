#include "config/configuration.h"

Configuration::Configuration() {
    // override stub    
}

Configuration::~Configuration() {
    // override stub    
}

void Configuration::load() {
    // override stub    
}

void Configuration::save() {
    // override stub    
}

std::string Configuration::getPath() const {
    return this->_path;
}
void Configuration::setPath(std::string path) {
    this->_path = path;
}