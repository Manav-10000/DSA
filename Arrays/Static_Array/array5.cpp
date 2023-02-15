//Print extremes of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    int start=0; //because starting index is always 0
    int end=size-1;  //because ending index is always n-1 i.e; size-1 here

    while(true){
        if(start>end)
        break;

        if(start==end){  //condition for odd no of elements
          cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}