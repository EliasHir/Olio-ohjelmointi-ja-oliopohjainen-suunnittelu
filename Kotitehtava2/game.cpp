#include "game.h"

using namespace std;

Game::Game(int ceilingNum)
{
    srand(time(0));
    maxNumber = ceilingNum;
    cout << "GAME CONSTRUCTOR: object initalized with " << maxNumber << " as a maximum value" << endl;
}

void Game::play()
    {
    randomNumber = rand() % maxNumber+1;

        while(playerGuess != randomNumber)
        {
            cout << "Give your guess between 1-10." << endl;
            cin >> playerGuess;

            if(playerGuess>randomNumber){
                cout << "Your guess is too big."<< endl;
                ++numOfGuesses;
            }
            else if(playerGuess<randomNumber){
                cout << "Your guess is too small."<< endl;
                ++numOfGuesses;
            }
            if(playerGuess==randomNumber){
                cout << "Your guess is right = "<< numOfGuesses << endl;
                printGameResult();
            }
        }
    }
void Game::printGameResult()
    {
        cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses " << endl;
        }

    Game::~Game(){
        cout << "GAME DESTUCTOR: object cleared from stack memory" << endl;
    }
