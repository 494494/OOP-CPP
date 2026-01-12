#include <iostream>
using namespace std;
double Volume(double side){
    return (side*side*side);
}
double Volume(double length,double breadth,double height){
    return (length*breadth*height);
}
double Volume(double radius,int){
    return ((4.0/3.0)*(22.0/7.0)*radius*radius*radius);
}
int main(){
    int side;
    cout<<"to calculate volume of cube"<<endl;
    cout<<"length of side :- ";
    cin>>side;
    cout<<"volume of cube :- "<<Volume(side)<<endl;
    //
    int length,breadth,height;
    cout<<"to calculate volume of cuboid"<<endl;
    cout<<"length :- ";
    cin>>length;
    cout<<"breadth :- ";
    cin>>breadth;
    cout<<"height :- ";
    cin>>height;
    cout<<"volume of cuboid :- "<<Volume(length,breadth,height)<<endl;
    //
    int radius;
    cout<<"to calculate volume of Sphere"<<endl;
    cout<<"radius :- ";
    cin>>radius;
    cout<<"volume of sphere :- "<<Volume(radius,1)<<endl;

    return 0;
}