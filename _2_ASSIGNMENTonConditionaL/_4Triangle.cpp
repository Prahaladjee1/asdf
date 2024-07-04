// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main() {
 int a,b,c;
 cout<<"enter side of triangle";
 cin>>a>>b>>c;
 if(a==b && b==c){
    cout<<"This is Equilateral triangle";
 }
 else if(a==b || b==c||a==c){
cout<<"it is isoceles triangle";
 }
 else {
    cout<<"scalene triangle ";
 }
 return 0;
}