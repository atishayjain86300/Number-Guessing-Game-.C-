#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    cout<<"Number Guesser Game\n";
    srand(time(0));
    int number=rand()%100;
    int userInput;
    cout<<"Enter a number";
    while(userInput!=number){
        cin>>userInput;
        if(userInput<number){
            cout<<"Too low";
        }
        if(userInput>number){
            cout<<"Too high";
        }
    }
    cout<<"Congratulations you won";
    return 0;
}