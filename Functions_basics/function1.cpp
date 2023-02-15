//Write a function top add 2 numbers.
#include<iostream>
using namespace std;
//line 5 fn declaration
int add(int a,int b)
{
int sum=a+b;
return sum;
}
int main()
{
int a;
cout<<"Enter the value of a: "<<endl;
cin>>a;

int b;
cout<<"Enter the value of b: "<<endl;
cin>>b;

int sum=add(a,b);
cout<<"Sum of a and b: "<<sum<<endl;

return 0;

}