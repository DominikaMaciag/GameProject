#include "KlasaDrzewo.h"
KlasaDrzewo::KlasaDrzewo(float x, float y)
		{	
		tekstura.loadFromFile("tekstury/drzewo.png");
		setTexture(tekstura);
		setPosition(sf::Vector2f(x,y));
		};
		
KlasaDrzewo::KlasaDrzewo (const KlasaDrzewo &drzewko)
		{
		setTexture(*(drzewko.getTexture()));
		setPosition(drzewko.getPosition());
		}
