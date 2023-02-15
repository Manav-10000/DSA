//Print minimum number in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
 int arr[]={1,2,3,4,5,6,7,8};
 int size=8;
 int mini=INT_MAX;
 

 for(int i=0; i<size; i++){
    if(arr[i]<mini){
        mini=arr[i];
    }
 }
 cout<<"Minimum number is:"<<mini<<endl;
 return 0;
}