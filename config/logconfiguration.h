#ifndef LOGCONFIG_H  // LOGCONFIG_H
#define LOGCONFIG_H

#include "config/configuration.h"
#include "logger/easylogging++.h"
#include <string>

namespace strayflux {
namespace config {

class LogConfiguration : public Configuration {
    public:
        LogConfiguration();
        LogConfiguration(std::string name, std::string path);
        ~LogConfiguration();
        
        void load();
        void save();
        
        std::string getName() const;
        void setName(std::string name);
        
    private:
        std::string _name;
        el::Configurations _conf;
};


} // config
} // strayflux
#endif // LOGCONFIG_H
