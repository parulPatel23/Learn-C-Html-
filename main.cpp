#include<iostream>
#include<string>
using namespace std;
int main(){

int a=10;
int b=20;
cout<<a+b;
cout<<endl;
cout<<a-b;
cout<<endl;
cout<<a*b;
cout<<endl;
cout<<a/b;
cout<<endl;
cout<<a%b;
cout<<endl;


// size
cout<<sizeof(int)<<endl;
// address
cout<<&a<<endl;
// limit


cout<<numeric_limits<int>::min();
cout<<endl;
cout<<numeric_limits<int>::max();
cout<<endl;
cout<<numeric_limits<char>::min();
cout<<endl;
cout<<numeric_limits<char>::max();
cout<<endl;
int n;


int passward;
cout<<"enter an integer:";
cin>>n;
(n%2==0)? cout<<n<< "is even.":
cout<<n<<"in odd.";

cout<<"enter passward";
cin>>passward;
(passward==1234)? cout<<"open":
(
 cout<<"wrong passward try again",
 cin>>passward,
 (passward==1234)?cout<<"open":cout<<"wrong passward try again"
);



  return ;

}