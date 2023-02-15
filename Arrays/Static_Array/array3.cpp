//Print maximum number in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
 int arr[]={1,2,3,4,5,6,7,8};
 int size=8;
 int maxi=INT_MIN;
 

 for(int i=0; i<size; i++){
    if(arr[i]>maxi){
        maxi=arr[i];
    }
 }
 cout<<"Maximum number is:"<<maxi<<endl;
 return 0;
}