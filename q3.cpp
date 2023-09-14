/*Any year is input through the keyboard. 
Write a program to determine whether the year is a leap year or not. 
(Considering leap year occurs after every 4 years)*/

#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if((x%4==0)&&(x%400==0)||(x%100!=0)){
    cout<<"The given year is a leap year"<<endl;
}
else{
    cout<<"The given year is not a leap year"<<endl;
}
}