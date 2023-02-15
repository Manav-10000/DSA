//Sum of even no. upto n
#include<iostream>
using namespace std;
int getevensum(int n)
{
    int sum=0;
    for(int i=0; i<=n; i=i+2){
       sum=sum+i;
    }
    return sum;
}

int main()
{
int n;
cout<<"Enter value of n: "<<endl;
cin>>n;

int ans=getevensum(n);
cout<<"The even sum of "<<n<< " is "<<ans;

}