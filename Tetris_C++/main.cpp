#include <SFML/Graphics.hpp>

using  namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Tutorial");
	
	while (window.isOpen())
	{
		window.clear();
		
		window.display();
	}
} 
