#include<iostream>
using namespace std;
int main() {
 char ch;
 cout<<"enter any character ";
 cin>>ch;
 int asci =(int)ch;
  if(asci>=65&&asci<=90 || asci>=97&&asci<=122){
    cout<<"It is Alphabet";
  }
  else if(asci>=48&&asci<=57){
    cout<<"It is DiGiT";
  }
  else {
    cout<<"It is special character";
  }
 return 0;
}