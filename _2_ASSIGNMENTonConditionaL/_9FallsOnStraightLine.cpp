// FOR FALl ON THE STRAIGHT LINE (slope of AB = slope of BC)

#include<iostream>
using namespace std;
int main() {
 int x1,y1,x2,y2,x3,y3;
 cout<<"enter all the point : ";
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 int slopeAB =(y2-y1)/(x2-x1);
 int slopeBC = (y3-y2)/(x3-x2);
 if(slopeAB==slopeBC){
    cout<<"All point lies on the straight line";
 }
 else cout<<"Not lies on the straight line or Non Collinear";
 return 0;
}