#include "config/logconfiguration.h"

LogConfiguration::LogConfiguration() {
    setName("default");
    setPath("strayfluxinteractive/strayflux/conf/default.logcfg");
}

LogConfiguration::LogConfiguration(std::string name ,std::string path) {
    setName(name);
    setPath(path);
}

LogConfiguration::~LogConfiguration() {
    
}

std::string LogConfiguration::getName() const {
    return _name;
}

void LogConfiguration::setName(std::string name) {
    _name = name;
}

void LogConfiguration::load() {
    el::Configurations configFile(getPath());
    el::Loggers::reconfigureLogger(getName(), configFile);
}

void LogConfiguration::save() {
    
}
