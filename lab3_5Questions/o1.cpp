#include <iostream>
using namespace std;
double getArea(double width, double length){
    width=width<0?0:width;
    length=length<0?0:length;
    return width*length;
}
int main(){
    double a,b;
    cout<<"this program calculates area of rectangle\nfollow instruction below to calculate -----";
    cout<<"\nwidth :- ";
    cin>>a;
    cout<<"length :- ";
    cin>>b;
    cout<<"Area = "<<getArea(a,b);
}