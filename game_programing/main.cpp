#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(800,600), "SFML works!");
	sf::Font font;

	float rectWidth = 10.0f;
	float rectHeight = 20.0f;
	float rectXpos = 10;
	float rectYpos = 30;
	float aa = 20;	

	const int Object_num = 30;
	sf::RectangleShape RectArray[Object_num];
	
	for (int i = 0; i < Object_num; i++)			//Rect들의 초기 성분 결정
	{
		RectArray[i].setSize(sf::Vector2f(30.0f, 30.0f));
		RectArray[i].setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));	//색
		RectArray[i].setPosition(sf::Vector2f(rand() % 800, rand() % 600));			//위치
	}

	//sf::RectangleShape shape(sf::Vector2f(rectWidth, rectHeight));

	//shape.setFillColor(sf::Color::Yellow);

	while (window.isOpen())
	{
		//shape.setPosition(rectXpos, rectYpos);

		
		if (rectXpos > 860.f)
		{
			rectXpos = 0.0f;
		}
		window.clear();
		//window.draw(shape);
		for (int i = 0; i < Object_num; i++)
		{
			window.draw(RectArray[i]);
			float dx = RectArray[i].getPosition().x;
			RectArray[i].setPosition(sf::Vector2f());
		}
		window.display();
		
	}
}