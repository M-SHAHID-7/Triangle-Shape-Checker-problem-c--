#include <iostream>
using namespace std;
int main()
{
// WRITE A PROGRAM WHETHER A TRIANGLE IS EQUILATERAL OR ISOSCELES OR SCALAR 
int side1,side2,side3;
cout<<"ENTER THE SIDE 1 OF TRIANGLE "<<endl;
cin>>side1;

cout<<"ENTER THE  SIDE  2 OF TRIANGLE "<<endl;
cin>>side2;

cout<<"ENTER THE SIDE 3 OF TRIANGLE "<<endl;
cin>>side3;

if(side1==side2 && side1==side3)
{
cout<<"EQUILATERAL TRIANGLE"<<endl;

}
else if (side1==side2 || side1==side3 || side2== side3)
{
cout<<"SCALAR TRIANGLE"<<endl;

}
else
{
    cout<<"ISOSCELES TRIANGLE"<<endl;
}

}