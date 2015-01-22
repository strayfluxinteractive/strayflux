/*
 * ResourceManager.h
 *
 *  Created on: Jan 21, 2015
 *      Author: David Jelley, Jr.
 */

#ifndef RESOURCEMANAGER_RESOURCEMANAGER_H_
#define RESOURCEMANAGER_RESOURCEMANAGER_H_

namespace strayflux {
namespace ResourceManager {

class ResourceManager {
public:
	ResourceManager();
	virtual ~ResourceManager();

	Resource getResource(std::string pathOfResource);

private:
	void loadResource(std::string pathOfResource);
	void setResource(); //TODO Is this needed?

	std::map <std::string, Resource> _resourceMap;
};

} /* namespace ResourceManager */
} /* namespace strayflux */

#endif /* RESOURCEMANAGER_RESOURCEMANAGER_H_ */
