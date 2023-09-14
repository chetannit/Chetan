/*Given three points (x1, y1), (x2, y2) and 
(x3, y3), write a program to check if all the three points fall on one straight line.
*/
#include<iostream>
using namespace std;
int main(){
 int x1,x2,x3,y1,y2,y3,m,n;
 cin>>x1>>x2>>x3>>y1>>y2>>y3;
 m=(y2-y1)/(x2-x1);
 n=(y3-y2)/(x3-x2);
 if(m==n){
    cout<<"The points fall on straight line"<<endl;
 }
 else{
    cout<<"The poiint doesn't fall on straight line"<<endl;
 }
}