//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5 
//1 2 3 4 5 6
//working just like pattern4.cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row+1; col++)
        {
          cout<<col+1;
        }
    cout<<endl;
    }   
 
}