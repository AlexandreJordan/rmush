#ifndef STAIRUP_HPP
#define STAIRUP_HPP

#include "entityfixeditem.hpp"
#include "entitymobile.hpp"
#include <iostream>

class StairUp : public EntityFixedItem
{
public:
    StairUp();
    ~StairUp();

	void render();
	void update();

    void use(EntityMobile* powner);
};

#endif

/**
 * Constructeur
 */
StairUp::StairUp() :
	EntityFixedItem()
{
}

/**
 * Destructeur
 */
StairUp::~StairUp()
{
}

/**
 * Utilisation de l'item directement au sol
 */
void StairUp::use(EntityMobile* powner)
{
	Engine::getInstance()->getGui().message(TCODColor::green, "Vous montez à l'étage supérieur.");
	Engine::getInstance()->getMap().changeLevelToUp();
}

void StairUp::update()
{
}

void StairUp::render()
{
	TCODConsole::root->setChar(x, y, chr);
	TCODConsole::root->setCharForeground(x, y, color);
}

