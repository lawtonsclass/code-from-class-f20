#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <thread>
using namespace std;

void pause(double seconds) {
  std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

class BouncingDot {
 public:
  BouncingDot(int sizeOfScreenX, int sizeOfScreenY);
  void step();
  void draw() const;

 private:
  int dotX;
  int dotY;
  int dotDirectionX;
  int dotDirectionY;
  int screenSizeX;
  int screenSizeY;
};

BouncingDot::BouncingDot(int sizeOfScreenX, int sizeOfScreenY)
    : screenSizeX(sizeOfScreenX), screenSizeY(sizeOfScreenY) {
  // the screen's x will go between 0 and screenSizeX-1
  // similar for y

  // pick an initial location of the dot on the screen
  dotX = rand() % screenSizeX;
  dotY = rand() % screenSizeY;

  // pick an initial direction
  dotDirectionX = dotDirectionY = 0;
  while (dotDirectionX == 0 && dotDirectionY == 0) {
    // we want our dot to actually move, so both direction offsets
    // can't both be 0
    dotDirectionX = rand() % 3 - 1;  // -1, 0, or 1
    dotDirectionY = rand() % 3 - 1;
    // try again if we randomly set them both to 0
  }
}

// move the dot in its current direction, bouncing off a wall if
// necessary
void BouncingDot::step() {
  int originalX = dotX, originalY = dotY;

  // move the dot in its current direction
  dotX += dotDirectionX;
  dotY += dotDirectionY;

  // check and see if we went past a wall
  if (dotX < 0 || dotX >= screenSizeX || dotY < 0 || dotY >= screenSizeY) {
    // if so, change our direction
    if (dotX < 0 || dotX >= screenSizeX) dotDirectionX *= -1;
    if (dotY < 0 || dotY >= screenSizeY) dotDirectionY *= -1;
    // go back to our original location
    dotX = originalX;
    dotY = originalY;
    // step in the new direction this time
    dotX += dotDirectionX;
    dotY += dotDirectionY;
  }
}

// draw a screenSizeY * screenSizeX grid with the dot at its current
// location
void BouncingDot::draw() const {
  for (int y = screenSizeY - 1; y >= 0; y--) {
    for (int x = 0; x < screenSizeX; x++) {
      if (x == dotX && y == dotY) {
        cout << '*';  // location of the dot
      } else if ((x == 0 || x == screenSizeX - 1) &&
                 (y == 0 || y == screenSizeY - 1)) {
        cout << '+';  // corners of the screen
      } else if (x == 0 || x == screenSizeX - 1) {
        cout << '|';  // vertical walls
      } else if (y == 0 || y == screenSizeY - 1) {
        cout << '-';  // horizontal walls
      } else {
        cout << ' ';  // empty space
      }
    }
    cout << endl;  // time for a new y coordinate
  }
}

int main() {
  srand(time(0));

  BouncingDot b(40, 20);
  while (true) {
    b.draw();
    b.step();
    pause(0.1);
  }

  return 0;
}
