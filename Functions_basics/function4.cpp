//write a function of student and grade problem.
#include<iostream>
using namespace std;
char getgrade(int marks)
{
    if(marks>=90)
    return'A';

    else if(marks>=80)
    return 'B';

    else if(marks>=70)
    return 'C';

    else if(marks>=60)
    return'D';

    else
    return 'E';
  
}
int main()
{
   int marks;
   cout<<"Enter marks: "<<endl;
   cin>>marks;

   char finalgrade= getgrade(marks);
   cout<<"Grade is: "<<finalgrade;

   return 0;

}