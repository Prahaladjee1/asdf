#include<iostream>
using namespace std;
int main() {
 int x,y;
 cout<<"enter the point of x and y axis";
 cin>>x>>y;
 if(x==0&&y==0){
    cout<<"The point lies on the origin";
 }
 else if(x==0){
    cout<<"it lies on the y-Axis";
 }
 else if(y==0){
    cout<<"it lies on the x-Axis";
 }
 else cout<<"It lies on the quadrant";
 return 0;
}