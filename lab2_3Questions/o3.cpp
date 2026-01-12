#include <iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter traffic light color: ";
    cin>>x;
    if(x=="Red"){cout<<"STOP!\n";}
    else if(x=="Green"){cout<<"Go!\n";}
    else{cout<<"Invalid input\n";}
}