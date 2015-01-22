/*
 * ResourceManager.cpp
 *
 *  Created on: Jan 21, 2015
 *      Author: David Jelley, Jr.
 *
 *  Description:
 *  	This is the resource manager. It will have a mapping of the resource
 *  	path and pointer to the resource if it is loaded.
 *
 *  	If the resource has not been loaded into memory this class will
 *  	load it and store it in the map.
 *
 *  License:
 *  	MIT license. See primary license for the project.
 */

#include "ResourceManager.h"

namespace strayflux {
namespace ResourceManager {

ResourceManager::ResourceManager() {
	// TODO Auto-generated constructor stub

}

ResourceManager::~ResourceManager() {
	// TODO Auto-generated destructor stub
}

Resource ResourceManager::getResource(std::string pathOfResource) {
	/* TODO:
	 * if( pathOfResource is in _resourceMap) {
	 * 		return _resourceMap<Value>;
	 * } else {
	 * 		return loadResource(path of resource);
	 * }
	 */
}

void ResourceManager::loadResource(std::string pathOfResource) {
	/* TODO:
	 * new Resource(pathOfResource) aResource;
	 * aResource.setData(pathToResource);
	 *
	 * _resourceMap.insert(aResource.getData());
	 *
	 * Return _resourceMap<Value>;
	 */
}

} /* namespace ResourceManager */
} /* namespace strayflux */
