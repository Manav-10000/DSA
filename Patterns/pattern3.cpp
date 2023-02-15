//the pattern is as follows
//* * * * *
//*       *
//* * * * *
//1st loop is for row
//2nd for column 
#include<iostream>
using namespace std;
int main()
{
    for(int row=0; row<3; row++)
    { 
     if(row == 0 || row == 2)
        {

        for(int col=0; col<5; col++)
        {
            cout<<"* ";
        }

        }
     else
     {
        cout<<"* ";
        for(int col=0; col<3; col++)
        {
            cout<<"  ";
        }
        cout<<"* ";
     }
     cout<<endl;
    }
}