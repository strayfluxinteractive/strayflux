#ifndef CONFIG_H  // CONFIG_H
#define CONFIG_H

#include <string>

class Configuration {
    public:
        Configuration();
        virtual ~Configuration() = 0;
        // Used to save current configuration to a file
        virtual void save() = 0;
        // Used to load configuration from a file
        virtual void load() = 0;
        
        std::string getPath() const;
	    void setPath(std::string path);
        
    private:
        std::string _path;
};


#endif // CONFIG_H