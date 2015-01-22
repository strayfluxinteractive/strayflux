/*
 * Resource.h
 *
 *  Created on: Jan 21, 2015
 *      Author: David Jelley, Jr.
 */

#ifndef RESOURCEMANAGER_RESOURCE_H_
#define RESOURCEMANAGER_RESOURCE_H_

namespace strayflux {
namespace ResourceManager {

class Resource {
public:
	Resource();
	virtual ~Resource();

	void setData(std::string pathToResource);
	void getData();

private:
	void _data;
};

} /* namespace ResourceManager */
} /* namespace strayflux */

#endif /* RESOURCEMANAGER_RESOURCE_H_ */
