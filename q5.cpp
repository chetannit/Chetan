/*Write a program to input sides of a triangle and check whether a triangle is equilateral, 
scalene or isosceles triangle.*/
#include<iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if(x==y==z){
    cout<<"The triangle is equilateral"<<endl;
}
else if((x==y && x!=z) || (y==z && x!=z) || (x==z && x!=y)){
    cout<<"The traingle is isoceles"<<endl;
}
}