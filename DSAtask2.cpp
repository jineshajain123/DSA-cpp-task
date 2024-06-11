//ROCK PAPER SICISSOR GAME 
//rock beats scissor
//scissor beats paper
//paper beats rock
#include<iostream>
#include<cstdlib>
#include<ctime>

#define ROCK 1 
#define PAPER 2
#define SCISSOR 3

using namespace std; 

int main()
{
    srand((unsigned int) time (NULL));

    int player_throw =0;
    int comp_throw =0;
    bool draw = false;

    do
    {
        cout<<"Choose the Number..."<<endl;
        cout<<"1. ROCK"<<endl;
        cout<<"2. PAPER"<<endl;
        cout<<"3. SCISSOR"<<endl;
        cout<<"Selection :"<<endl;
        cin>>player_throw;

        cout<<endl;

        comp_throw =(rand() %3 )+1;

        if(comp_throw==ROCK)
        {
            cout<<"COMPUTER THROWS ROCKS !"<<endl;
        }
        else if (comp_throw == PAPER)
        {
            cout<<"COMPUTER THROWS PAPER !"<<endl;
        }
        else if (comp_throw== SCISSOR)
        {
            cout<<"COMPUTER THROWS SCISSOR !"<<endl;
        }

        draw = false;
        if (player_throw == comp_throw)
        {
            draw = true;
            cout<< "DRAW!! Play Again!"<<endl;
        }
        else if (player_throw==ROCK && comp_throw==SCISSOR)
        {
            cout<<"ROCKS beats SCISSOR !"<<endl;
            cout<<"YOU WIN..!"<<endl;
        }
        else if (player_throw==PAPER && comp_throw==ROCK)
        {
            cout<<"PAPER beats ROCK !"<<endl;
            cout<<"YOU WIN..!"<<endl;
        }
        else if (player_throw==ROCK && comp_throw== PAPER)
        {
            
            cout<<"PAPER beats ROCK !"<<endl;
            cout<<"YOU LOSE..!"<<endl;
        }
        else if (player_throw== PAPER && comp_throw == SCISSOR)
        {
            cout<<"SCISSOR beats PAPER !"<<endl;
            cout<<"YOU LOSE..!"<<endl;
        }
        else if (player_throw== SCISSOR && comp_throw == PAPER )
        {
            cout<<"SCISSOR beats PAPER !"<<endl;
            cout<<"YOU WIN..!"<<endl;
        }
        else if (player_throw== SCISSOR && comp_throw == ROCK )
        {
            cout<<"ROCK beats SCISSOR !"<<endl;
            cout<<"YOU LOSE..!"<<endl;
        }

        cout<< endl;
    } while (draw);
    
    return 0;
}