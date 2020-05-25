#include "KlasaBlok.h"
KlasaBlok::KlasaBlok(float x, float y)
		{	
		tekstura.loadFromFile("tekstury/klocek.png");
		setTexture(tekstura);
		setPosition(sf::Vector2f(x,y));
		};
		
KlasaBlok::KlasaBlok (const KlasaBlok &bloczek)
		{
		setTexture(*(bloczek.getTexture()));
		setPosition(bloczek.getPosition());
		}
