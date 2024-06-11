//tic tac toe game
#include<iostream>
using namespace std;

char space [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char tokan='x';
bool tie=false;
string n1="";
string n2="";

void functionOne()
{
    
    cout <<"    |     |     "<<endl; 
    cout<<" "<<space[0][0]<<"  | "<<space[0][1]<<"   | "<<space[0][2]<<"  "<<endl;
    cout <<"____|_____|____ "<<endl;
    cout <<"    |     |     "<<endl;
    cout<<" "<<space[1][0]<<"  | "<<space[1][1]<<"   | "<<space[1][2]<<"  "<<endl;
    cout <<"____|_____|____ "<<endl;
    cout <<"    |     |     "<<endl;
    cout<<" "<<space[2][0]<<"  | "<<space[2][1]<<"   | "<<space[2][2]<<"  "<<endl;
    cout <<"    |     |     "<<endl;
}

void functionTwo()
{


    int digit;

    if(tokan=='x')
    {
        cout<<endl<<n1<<"PLEASE ENTER";
        cin>>digit;
    }
if(tokan=='0')
   {
        cout<<endl<<n2<<"PLEASE ENTER";
        cin>>digit;
   }

   if(digit==1)
   {
    row=0;
    column=0;
   }

   if(digit==2)
   {
    row=0;
    column=1;
   }

   if(digit==3)
   {
    row=0;
    column=2;
   }

   if(digit==4)
   {
    row=1;
    column=0;
   }

   if(digit==5)
   {
    row=1;
    column=1;
   }

   if(digit==6)
   {
    row=1;
    column=2;
   }

   if(digit==7)
   {
    row=2;
    column=0;
   }

   if(digit==8)
   {
    row=2;
    column=1;
   }

   if(digit==9)
   {
    row=2;
    column=2;
   }

   else if(digit<1 || digit>9)
   {
    cout <<"INVALID !"<<endl;
   }

   if (tokan=='x' && space[row][column] !='x' && space [row][column] !='0')
   {
    space[row][column]='x';
    tokan='0';
   }

   
else if(tokan=='0' && space[row][column] !='x' && space [row][column]!='0')
{
    space[row] [column]='0';
    tokan='x';
}
else
{
    cout<<"there is no empty space!"<<endl;
    functionTwo();
}
functionOne();
}

bool functionThree()
{
    for(int i=0;i<3;i++)
    {
        if (space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i] )
        return true;
    }
    if (space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if (space[i][j] !='x' && space[i][j] !='0')
            {
                return false;
            }
        }
    }
    tie=true;
    return false;
}
int main()
{
    cout <<"Enter the name of the first player : "<<endl;
    getline(cin,n1);
    cout<<"Enter the name of the second player : "<<endl;
    getline(cin,n1);
    cout<< " Is player 1 so he/she will play first "<<endl;
    cout<< " Is player 2 so he/she will play first "<<endl;
    
    while(! functionThree())
    {
        functionOne();
        functionTwo();
        functionThree();
    }

    if (tokan =='x' && tie == false)
    {
        cout<<n2 <<" WINS !!!"<<endl;
    }
    
    else if (tokan =='0' && tie == false)
    {
        cout<<n1 <<" WINS !!!"<<endl;
    }
    else
    {
        cout<<"It's a draw!"<<endl;
    }
}