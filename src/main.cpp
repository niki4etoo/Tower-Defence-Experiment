#include <iostream>
#include <SFML/Graphics.hpp>

#include "../include/Map.hpp"
#include "../include/Tower.hpp"

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
  window.setFramerateLimit(60);

  // Create a an SFML View for the main action
	View mainView(sf::FloatRect(0, 0, resolution.x, resolution.y));

  //Drawing the main elements in the game ( to do )
  // Draw background color
  RectangleShape background;
  background.setSize(Vector2f(resolution.x, resolution.y));
  background.setPosition(Vector2f(0, 0));
  background.setFillColor(Color(120, 80, 20));

  // MainMenu
  RectangleShape mainMenu(Vector2f((resolution.x / 2) - 250, 60));
  mainMenu.setPosition((resolution.x / 2) + 250, 0);
  mainMenu.setFillColor(Color(0, 245, 30));

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

  // Drawing the land
  RectangleShape landBack;
  landBack.setSize(Vector2f(150, 300));
  landBack.setPosition(Vector2f(0, 300));
  landBack.setFillColor(Color(180, 0, 0));

  RectangleShape landFront;
  landFront.setSize(Vector2f(200, 200));
  landFront.setPosition(Vector2f(0, 350));
  landFront.setFillColor(Color(140, 0, 0));

  // Drawing the towers
  Tower tower1 = Tower();
  Tower tower2 = Tower();

  tower1.set_tower1_init_out_pos_x(resolution.x - (resolution.x / 2) - 200);
  tower1.set_tower1_init_out_pos_y(200);
  tower1.set_tower1_init_in_pos_x(resolution.x - (resolution.x / 2) - 175);
  tower1.set_tower1_init_in_pos_y(225);

  tower2.set_tower2_init_out_pos_x(resolution.x - (resolution.x / 2) + 175);
  tower2.set_tower2_init_out_pos_y(300);
  tower2.set_tower2_init_in_pos_x(resolution.x - (resolution.x / 2) + 200);
  tower2.set_tower2_init_in_pos_y(325);

  RectangleShape towerOneOutside;
  towerOneOutside.setSize(Vector2f(125, 125));
  towerOneOutside.setPosition(Vector2f(tower1.get_tower1_init_out_pos_x(), tower1.get_tower1_init_out_pos_y()));
  towerOneOutside.setFillColor(Color(120, 145, 145));



  RectangleShape towerOneInside;
  towerOneInside.setSize(Vector2f(75, 75));
  towerOneInside.setPosition(Vector2f(tower1.get_tower1_init_in_pos_x(), tower1.get_tower1_init_in_pos_y()));
  towerOneInside.setFillColor(Color(120, 185, 185));

  RectangleShape towerTwoOutside;
  towerTwoOutside.setSize(Vector2f(125, 125));
  towerTwoOutside.setPosition(Vector2f(tower2.get_tower2_init_out_pos_x(),tower2.get_tower2_init_out_pos_y()));
  towerTwoOutside.setFillColor(Color(120, 145, 145));

  RectangleShape towerTwoInside;
  towerTwoInside.setSize(Vector2f(75, 75));
  towerTwoInside.setPosition(Vector2f(tower2.get_tower2_init_in_pos_x(), tower2.get_tower2_init_in_pos_y()));
  towerTwoInside.setFillColor(Color(120, 185, 185));


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

      window.draw(background);
      //Drawing the example menu on the map
      window.draw(mainMenu);

      //Drawing the path on the map
      window.draw(beginPath);
      window.draw(middlePath);
      window.draw(endPath);

      //Drawing the land on the map
      window.draw(landBack);
      window.draw(landFront);

      //Drawing the towers
      window.draw(towerOneOutside);
      window.draw(towerOneInside);

      window.draw(towerTwoOutside);
      window.draw(towerTwoInside);


      window.display();
  }

  return 0;
}
