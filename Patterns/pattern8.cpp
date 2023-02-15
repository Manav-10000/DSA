//     *       
//    * *
//   * * *
//  * * * *
// * * * * *
//* * * * * *
//loop 1st for rows
//loop 2nd for spaces before the *'s in rows
//loop 3rd for *'s in the columns
//loop 4th for spaces after the *'s in rows
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter nummber of rows: ";
    cin>>n;

    for(int row=0; row<n; row++)
    {
        for(int space1=0; space1<n-(row+1); space1++)
        {
            cout<<" ";
        }
        for(int star=0; star<row+1; star++)
        {
            cout<<"* ";
        }
        for(int space2=0; space2<n-(row+1); space2++)
        {
            cout<<" ";
        }
            cout<<endl;
    }
        return 0;
}