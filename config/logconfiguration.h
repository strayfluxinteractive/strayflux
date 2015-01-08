#ifndef LOGCONFIG_H  // LOGCONFIG_H
#define LOGCONFIG_H

#include "config/configuration.h"
#include "logger/easylogging++.h"
#include <string>

class LogConfiguration : public Configuration {
    public:
        LogConfiguration();
        LogConfiguration(std::string path);
        ~LogConfiguration();
        
        void load();
        void load(std::string path);
        void save();
        
    private:
        el::Configurations _conf;
};

#endif // LOGCONFIG_H