//Counting 1 to n
#include<iostream>
using namespace std;
int printcount(int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
   int n;
   cout<<"Enter value of n: "<<endl;
   cin>>n;

   printcount(n);
   return 0;
}