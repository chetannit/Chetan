/*Write a C++ program to input any character and check whether 
it is the alphabet, digit or special character*/
#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
    cout<<"It is a alphabet"<<endl;
}
else if(ch>='0'&&ch<='9'){
    cout<<"It is a digit"<<endl;
}
else{
    cout<<"It is special character"<<endl;
}
}