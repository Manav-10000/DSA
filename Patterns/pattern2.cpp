//pattern2 is as follows
//****
//****
//****
//****
//loop1 for rows
//loop2 for colmns

#include<iostream>
using namespace std;
int main()
{
    for(int row=0; row<4; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}