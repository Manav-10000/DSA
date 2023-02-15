//* * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int row=0; row<n; row++)
    {
        for(int space1=0; space1<row; space1++)
        {
           cout<<" ";
        }
        for(int star=0; star<n-row; star++)
        {
           cout<<"* ";
        }
        for(int space2=0; space2<row; space2++)
        {
           cout<<" ";
        }
           cout<<endl;
    }
}
