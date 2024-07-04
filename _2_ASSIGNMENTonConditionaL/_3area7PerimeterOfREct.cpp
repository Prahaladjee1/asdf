// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main() {
 int l ,b;
 l=5;
 b=7;
 int area = l*b;
 int breadth = 2*(l+b);
//  cout<<area<<endl;
//  cout<<breadth;
if(area>breadth){
    cout<<"Area is greater than perimeter";
}
else cout<<"our programm is wrong";
 return 0;
}