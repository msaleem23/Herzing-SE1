#include <iostream>
#include <cstdlib>
#include <ctime>

class DiceGame {
public:
    // the number of sides on the dice
    DiceGame(int sides) : sides(sides) {
        std::srand(std::time(nullptr)); 
    }
    // Function to roll and display the result
    void roll() {
        int rollValue = std::rand() % sides + 1; // Generate a random roll
        std::cout << "You rolled a " << rollValue << "!" << std::endl;
    }
private:
    int sides; // store the number of sides on the dice
};
// Main function to run the game
int main() {
    // object of the DiceGame class with a 6 ided dice
    DiceGame game(6);

    // rolling dice
    game.roll();

    return 0;
}
