#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand((unsigned int) time(NULL));

    int number = (rand() % 100) + 1; 

    int guess = 0;

    do
    {
        cout<< "Enter guess number (1-100):"; 
        cin>> guess;

        if (guess > number) 
        cout<< "Guess lower! Try again.." << endl;

        else if (guess < number)
        cout<< "Guess Higher! Try again.." <<endl;

        else
        cout<< "CONGRATULATIONS...YOU WON!"<<endl;
    } while (guess!= number);
    

    return 0;
}