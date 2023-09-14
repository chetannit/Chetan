/*If the marks of A, B and C are input through the keyboard, 
write a program to determine the student scoring least marks. */
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<b && a<c) cout<<"The student scoring least marks is: "<<a<<endl;

else if(b<a && b<c) cout<<"The student scoring least marks is: "<<b<<endl;
else cout<<"The student scoring least marks is: "<<c<<endl;
}