
 #include <iostream>
 #include <unistd.h>
 #include <SFML/System/Clock.hpp>
 #include <SFML/System/Time.hpp>
 #include <SFML/Graphics.hpp>
 #include <SFML/Audio.hpp>
 #define KAPTUREK_SPADANIE 0.001
 #define KAPTUREK_CHODZENIE 0.3
 #define KAPTUREK_PRZYSPIESZENIE 0.0005
 #define SKOK_MOC 0.058
 #define KAPTUREK_SPAWN (0,340) //było 200
 #define SZYBKOSC 2
 
 //class platformy :: 

 int main()
 {

 /* zmienne do poruszania się */
 float poziomo_ruch=0;
 float pionowo_ruch=0;
 bool kapturek_stoi=false;
 
sf::Time czas = sf::milliseconds(SZYBKOSC);
sf::Clock zegar;
 
 
/* nasza postać - Czerwony Kapturek
tworzymy okienko by wyświetlić nasz plik
nasze okienko ma wymiary 640x480 pixeli */
sf::RenderWindow window(sf::VideoMode(800, 440), "Witaj, jestem Kapturek!");

sf::Texture texture; //definiujemy teksturę
if (!texture.loadFromFile("kapturek.png")) //wczytujemy nasz obraz 
	{
	std::cout << "Load failed" << std::endl;
	system("pause");
	}

sf::Sprite kapturek; 
kapturek.setTexture(texture);
	
kapturek.setPosition KAPTUREK_SPAWN; //(prawo/-lewo,-góra/dół)
//kapturek.move(sf::Vector2f(50,40)); // przesunęliśmy naszego Kapturka


/* bloczek */ 
sf::Texture texture2; //definiujemy drugą teksturę
	if (!texture2.loadFromFile("klocek.jpg")) //wczytujemy nasz bloczek 
	{
	std::cout << "Load failed" << std::endl;
	system("pause");
	}

sf::Sprite blok;
blok.setTexture(texture2);
blok.setPosition(sf::Vector2f(0,400));


/* bloczek 2 - trampolina */
sf::Texture texture3; //definiujemy trzecią teksturę
if (!texture3.loadFromFile("klocek.jpg")) //wczytujemy nasz bloczek 
	{
	std::cout << "Load failed" << std::endl;
	system("pause");
	}
	
sf::Sprite blok2;
blok2.setTexture(texture3);
blok2.setPosition(sf::Vector2f(300,400)); 


/* tło mapy */
sf::Texture background; //definiujemy teksturę tła
if (!background.loadFromFile("mapa.jpg")) //wczytujemy nasz bloczek 
	{
	std::cout << "Load failed" << std::endl;
	system("pause");
	}
	
sf::Sprite mapa;
mapa.setTexture(background);
mapa.setPosition(sf::Vector2f(0,0));
//mapa.setScale(sf::Vector2f(1.25,1.25)); // możemy zmienić skalę mapy jednak w naszym przypadku jest to niepotrzebne


/* muzyka */
sf::Music muzyka; //definiujemy muzykę
if (!muzyka.openFromFile("muzyka.wav")) //otwieramy plik audio
{
std::cout << "Load failed" << std::endl;
system("pause");
}
muzyka.setVolume(10); //obniża głośność 
muzyka.setLoop(true); //muzyka będzie się odtwarzać w zapętleniu

/* odtwarzazmy muzykę wciskając klawisz m */ // nie działa :(
/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::M)) 
{
muzyka.play();
}*/
muzyka.play(); //odtwarzamy muzykę


//////////////////////////////PĘTLA//////////////////////////////


/* okno */
while (window.isOpen())
	{
	zegar.restart();
	sf::Event event;

	while (window.pollEvent(event))
		{
		  switch (event.type)
		  {
		  case sf::Event::Closed:
		  window.close();
		  break;
	          }

 	        }

window.clear( ); //usuwa nieaktualny obraz


/* poruszanie się postaci */ 
/* poruszanie się do góry*/
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) //do góry
	{
	//kapturek.move( sf::Vector2f(0,-0.5) ); //zostawiam w komentarzu poprzdni sposób poruszania się
	if (kapturek_stoi == true)
		{
		kapturek_stoi = false;
		pionowo_ruch += -SKOK_MOC;
		}
	}
	
/* poruszanie się w dół */
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) //w dół
	{
	//kapturek.move( sf::Vector2f(0,0.5) );
	//if (kapturek_stoi == false) {pionowo_ruch += KAPTUREK_CHODZENIE;}
	}
	
/* poruszanie się w lewo */	
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) //w lewo
	{
	//kapturek.move( sf::Vector2f(-0.5,0) );
	poziomo_ruch += -KAPTUREK_CHODZENIE;
	}
	
/* poruszanie się w prawo */ 
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) //w prawo
	{
	//kapturek.move( sf::Vector2f(0.5,0) );
	poziomo_ruch += KAPTUREK_CHODZENIE;
	}
	pionowo_ruch += KAPTUREK_SPADANIE;

/* spadanie w dół */
if ( blok.getGlobalBounds().intersects(kapturek.getGlobalBounds()) ) 
{
//kapturek.move( sf::Vector2f(0,kapturek_spadanie) );
kapturek_stoi = true;
if (pionowo_ruch > 0) pionowo_ruch = 0;
}
if ( blok2.getGlobalBounds().intersects(kapturek.getGlobalBounds()) ) 
{
//kapturek.move( sf::Vector2f(0,kapturek_spadanie) );
kapturek_stoi = true;

if (pionowo_ruch > 0) pionowo_ruch = - pionowo_ruch;
}

	//kapturek.move( sf::Vector2f(0,KAPTUREK_SPADANIE) );
	kapturek.move( sf::Vector2f(poziomo_ruch,pionowo_ruch) );
	
	
/* przyspieszanie chodu postaci */
/* przyspieszanie w prawo */
if( poziomo_ruch > (KAPTUREK_CHODZENIE - KAPTUREK_PRZYSPIESZENIE))
	{
	poziomo_ruch += -(KAPTUREK_CHODZENIE - KAPTUREK_PRZYSPIESZENIE);
	}
else if (poziomo_ruch > 0 )
	{
	poziomo_ruch = 0 ;
	}

/* przyspieszanie w lewo */
if( poziomo_ruch < -(KAPTUREK_CHODZENIE - KAPTUREK_PRZYSPIESZENIE))
	{
	poziomo_ruch += (KAPTUREK_CHODZENIE - KAPTUREK_PRZYSPIESZENIE);
	}
else if (poziomo_ruch < 0 )
	{
	poziomo_ruch = 0 ;
	}


/* restartujemy wciskając q*/
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) kapturek.setPosition KAPTUREK_SPAWN;


/* wyświetlamy obiekty w oknie */
window.draw(mapa);
window.draw(kapturek);
 window.draw(blok);	
window.draw(blok2);
 window.display();
 
while (zegar.getElapsedTime()<czas) {usleep(10);}
	}

 return EXIT_SUCCESS;
 }
