#include <iostream>
#include <cstdlib>
#include <ctime>
int game(int maxnum);

using namespace std;

int num;
int guess;

int maxnum;
int tries;

int main()
{
    int tries = game(int (20));
    cout << "Your tries " << tries << "." << endl;
}

int game(int maxnum)
{
    srand(time(0));
    num = rand() % maxnum;

    while(guess != num){
        cout << "Guess a number between 1 and 20." << endl;
        cin >> guess;

        if(guess>num){
            cout<<"Guessed too high."<< endl;
            ++tries;
        }
        else if(guess<num){
            cout<<"Guessed too low."<< endl;
            ++tries;
        }
        else if(guess==num){
            cout<<"Your guess is correct."<< endl;
        }
    }
    return tries;
}
