/*Given a point (x, y), write a program to find out if it lies on the x-axis, 
y-axis or at the origin, viz. (0, 0). */
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point lies in both x-axis and y-axis"<<endl;
    }
    else{
        cout<<"The point doesnt lies in both x-axis and y-axis"<<endl;
    }
}