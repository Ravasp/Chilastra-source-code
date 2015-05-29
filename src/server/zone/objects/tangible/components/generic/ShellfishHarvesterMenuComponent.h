/*
 * ShellfishHarvesterMenuComponent.h
 *
 *  Created on: 3/11/2012
 *      Author: TragD
 */

#ifndef SHELLFISHHARVESTERMENUCOMPONENT_H_
#define SHELLFISHHARVESTERMENUCOMPONENT_H_

#include "../TangibleObjectMenuComponent.h"

class ShellfishHarvesterMenuComponent : public TangibleObjectMenuComponent {
public:

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	virtual void fillObjectMenuResponse(SceneObject* sceneObject, ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player PlayerCreature that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	virtual int handleObjectMenuSelect(SceneObject* sceneObject, CreatureObject* player, byte selectedID);

};


#endif /* SHELLFISHHARVESTERMENUCOMPONENT_H_ */