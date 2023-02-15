//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*
// her in the column part use col<n-row because we want 6* in the first line
// col<n-row for n=6 is col<6-row
// for eg for 1st row it is col<6-0 i.e; col<6 which means 6 stars will be printed in the first line
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}