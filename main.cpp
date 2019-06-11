#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML demo");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);
  auto speed = 10.0f;

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::KeyPressed:
          if (event.key.code == sf::Keyboard::A) {
            shape.move(-speed, 0);
          }
          if (event.key.code == sf::Keyboard::D) {
            shape.move(speed, 0);
          }
          if (event.key.code == sf::Keyboard::W) {
            shape.move(0, -speed);
          }
          if (event.key.code == sf::Keyboard::S) {
            shape.move(0, speed);
          }

        default:
          break;
      }
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;
}
