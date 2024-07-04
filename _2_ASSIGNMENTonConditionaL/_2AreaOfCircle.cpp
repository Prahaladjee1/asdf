// Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
//Perimeter of circle = 2*pi*r
// Area = pi*r*r
#include<iostream>
using namespace std;
int main() {
 int r =4;
int area = 3.142*r*r;
int perimeter = 2*3.142*r;
cout<<"Perimeter of circle is : "<<perimeter<<endl;
cout<<"Area Of Circle is : "<<area;
 return 0;
}