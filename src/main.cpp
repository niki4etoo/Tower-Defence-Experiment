#include <iostream>
#include <SFML/Graphics.hpp>

#include "../include/Map.hpp"

using namespace sf;


int main(void)
{
  std::cout << "Starting Point - Fullscreen" << std::endl;

  // Get the screen resolution
  Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	RenderWindow window(VideoMode(resolution.x, resolution.y),
		"Tower Defence Experiment", Style::Fullscreen);

  // Create a an SFML View for the main action
	View mainView(sf::FloatRect(0, 0, resolution.x, resolution.y));

  //Drawing the main elements in the game ( to do )
  // ExampleMenu
  RectangleShape exampleMenu(Vector2f(resolution.x / 2, 60));
  exampleMenu.setPosition(resolution.x / 2, 0);
  exampleMenu.setFillColor(Color::White);

  //Drawing the path
  RectangleShape beginPath;
  beginPath.setSize(Vector2f(resolution.x - (resolution.x / 2), 100));
  beginPath.setPosition(Vector2f(resolution.x - (resolution.x / 2), 100));
  beginPath.setFillColor(Color(150, 150, 180));

  RectangleShape middlePath;
  middlePath.setSize(Vector2f(100, 400));
  middlePath.setPosition(Vector2f(resolution.x - (resolution.x / 2), 100));
  middlePath.setFillColor(Color(150, 150, 180));
  RectangleShape endPath;
  endPath.setSize(Vector2f(500, 100));
  endPath.setPosition(Vector2f(resolution.x - (resolution.x / 2) - 500, 400));
  endPath.setFillColor(Color(150, 150, 180));

  // run the program as long as the window is open
  while (window.isOpen())
  {
      // check all the window's events that were triggered since the last iteration of the loop
      sf::Event event;
      while (window.pollEvent(event))
      {
          if(event.type == Event::KeyPressed) {
              if (event.key.code == Keyboard::Escape){
                  window.close();
              }
          }

      }
      window.clear();

      //Drawing the example menu on the map
      window.draw(exampleMenu);

      //Drawing the path on the map
      window.draw(beginPath);
      window.draw(middlePath);
      window.draw(endPath);

      window.display();
  }

  return 0;
}
