#include <iostream>
#include <cstdlib>
#include <ctime>

class DiceGame {
public:
    // Constructor to set the number of sides on the dice
    DiceGame(int sides) : sides(sides) {
        std::srand(std::time(nullptr)); 
    }
    //func to roll the dice
    virtual void roll() {
        int rollValue = std::rand() % sides + 1; // Generate random roll
        std::cout << "You rolled a " << rollValue << "!" << std::endl;
    }
protected:
    int sides; // store number of sides of dice
};
//inheritance
class LoadedDiceGame : public DiceGame {
public:
    // constructor to set the number of sides on the dice and the biased side
    LoadedDiceGame(int sides, int biasedSide) : DiceGame(sides), biasedSide(biasedSide) {}

    // simulate a loaded dice
    void roll() {
        int rollValue;
        // 50% chance to roll the biased side
        if (std::rand() % 2 == 0) {
            rollValue = biasedSide;
        } else {
            rollValue = std::rand() % sides + 1;
        }
        std::cout << "You rolled a " << rollValue << "!" << std::endl;
    }
private:
    int biasedSide; // biased side of the dice
};

// Main function to run the game
int main() {
    // Object of the DiceGame class with a 6-sided dice
    DiceGame game(6);
    std::cout << "Regular Dice Game:" << std::endl;
    game.roll();

    // Object of the LoadedDiceGame class with a 6-sided dice biased towards 6
    LoadedDiceGame loadedGame(6, 6);
    std::cout << "\nLoaded Dice Game:" << std::endl;
    loadedGame.roll();

    return 0;
}
