//Write a function to display area of circle
#include<iostream>
using namespace std;
int area(int r)
{
    int area=3.14*r*r;
    return area;

}
int main()
{
    int r;
    cout<<"Enter the radius: "<<endl;
    cin>>r;

    int cr_area=area(r);
    cout<<"Area of circle is: "<<cr_area<<endl;
    cout<<"here area and radius are in centimeters"<<endl;
    return 0;
}