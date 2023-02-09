#include <SFML/Graphics.hpp>
#include<iostream>

#define WIDTH 1024
#define HEIGHT 1024


int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT),"TicTacToe");

    while (window.isOpen())
    {
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
        window.clear();

        window.display();

    }

    return 0;
}