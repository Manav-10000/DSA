//To find an element in an array using linear search
#include<iostream>
using namespace std;
bool find(int arr[], int size, int key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main()
{
int arr[5];
int size=5;
int key;

cout<<"Enter thr elements of array: "<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"Enter the key: "<<endl;
cin>>key;

if(find(arr,size,key)){
    cout<<"Found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}

return 0;
    
}