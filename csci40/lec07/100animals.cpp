#include <iostream>
using namespace std;

int main() {
  // try all combinations of horses, pigs, and rabbits
  // the amount of each animal can be [0, 100]
  for (int numHorses = 0; numHorses <= 100; numHorses++) {
    for (int numPigs = 0; numPigs <= 100; numPigs++) {
      for (int numRabbits = 0; numRabbits <= 100; numRabbits++) {
        // inside of this innermost loop's body, numHorses is set to a
        // value between 0 and 100, and the same is true for numPigs
        // and numRabbits. Every possibility will happen once.
        int numAnimalsBought = numHorses + numPigs + numRabbits;
        double price = numHorses * 10 + numPigs * 3 + numRabbits * 0.50;
        // we only care when numAnimalsBought == 100 && price ==
        // 100.00
        if (numAnimalsBought == 100 && price == 100.00) {
          cout << "horses: " << numHorses << endl;
          cout << "pigs: " << numPigs << endl;
          cout << "rabbits: " << numRabbits << endl;
        }
      }
    }
  }

  return 0;
}
