#include <iostream>
#include <SFML/Graphics.hpp>

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
  }

  return 0;
}
