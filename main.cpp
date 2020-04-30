
 #include <iostream>
 #include <SFML/Graphics.hpp>

 int main()
 {
    /* tworzymy okienko by wyświetlić nasz plik
    nasze okienko ma wymiary 640x480 pixeli */
    sf::RenderWindow window(sf::VideoMode(640, 480), "Witaj, jestem Kapturek!");
    sf::Texture texture;

    if (!texture.loadFromFile("postać.png")) //wczytujemy nasz obraz 
    {
    std::cout << "Load failed" << std::endl;
    system("pause");
    }

    sf::Sprite sprite; 
    sprite.setTexture(texture);

    //sprite.setTextureRect(sf::IntRect(0, 0, 600, 600));  
sprite.move(sf::Vector2f(50,40)); // przesunęliśmy naszego Kapturka



	while (window.isOpen())
	{
	sf::Event event;

		while (window.pollEvent(event))
		{

		  switch (event.type)
		  {
		  case sf::Event::Closed:
		  window.close( );
		  break;
	          }

 	        }


 	window.clear( );

	//poruszanie się postaci
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) //do góry
	{
	sprite.move(0,-1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) //w dół
	{
	sprite.move(0,1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) //w lewo
	{
	sprite.move(-1,0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) //w prawo
	{
	sprite.move(1,0);
	}

 	window.draw(sprite);
 	window.display( );
	}

 return EXIT_SUCCESS;
 }


