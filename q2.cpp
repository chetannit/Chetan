/*Given the radius of the circle predict whether numerically
 area of this circle is larger than the circumference or not.*/
#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
     float area=3.14*r*r;
     float circumfernce=2*3.14*r;
     if(area>circumfernce){
        cout<<"Area is larger than circumfernce"<<endl;
     }
     else{
        cout<<"Circumfernce is larger than area"<<endl;
     }
}