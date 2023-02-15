//Find number is even or odd
#include<iostream>
using namespace std;
int even_odd(int num)
{
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main()
{
 int num;
 cout<<"Enter a number: "<<endl;
 cin>>num;

 cout<<"The number is: ";
 even_odd(num);
 return 0;
}