/*Given the length and breadth of a rectangle, 
write a program to find whether numerically the area of the rectangle is greater than its perimeter.*/
#include<iostream>
using namespace std;
int main(){
int length,breadth;
cin>>length>>breadth;
int Area = length * breadth;
int perimeter = 2*(length+breadth);
if(Area>perimeter){
    cout<<"Area is greater than perimeter"<<endl;
}
else{
    cout<<"Perimeter is greater than area"<<endl;
}
}