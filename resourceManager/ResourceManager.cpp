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

Resource* ResourceManager::getResource(std::string pathOfResource) {
	std::map <std::string, Resource*>::iterator it;

	it = _resourceMap.find(pathOfResource);

	if( it == _resourceMap.end() ) {
		return setResource(pathOfResource);
	} else {
		return _resourceMap[it];
	}
}

Resource* ResourceManager::setResource(std::string pathOfResource) {
	std::string type = pathOfResource.substr(pathOfResource.find_last_of(".") + 1);
	Resource* newResource;

	if( type == "jpg" ){
		ResourceImage newImage(pathOfResource);
		newResource = (Resource*) newImage;
	} else if(type == "wav") {
		ResourceSound newSound(pathOfResource);
		newResource = (Resource*) newSound;
	} else if(type == "pota"){
		ResourceSomething newSomething(pathOfResource);
		newResource = (Resource*) newSomething;
	} else {
		//ERROR not a resource we can use.
	}

	if(newResource){
		_resourceMap.insert( std::pair<std::string, Resource*>(pathOfResource, newResource) );
		return _resourceMap.find(pathOfResource);
	}
}

} /* namespace ResourceManager */
} /* namespace strayflux */
