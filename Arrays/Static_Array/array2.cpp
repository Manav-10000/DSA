//Counting 0's and 1's in an array
#include<iostream>
using namespace std;
int main()
{
 int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
 int size=15;
 int countzero=0;
 int countone=0;
 

 for(int i=0; i<size; i++){
    if(arr[i]==0){
        countzero++;
    }
    if(arr[i]==1){
        countone++;
    }
 }
 cout<<"Number of zero's: "<<countzero<<endl;
 cout<<"Number of one's: "<<countone<<endl;
}