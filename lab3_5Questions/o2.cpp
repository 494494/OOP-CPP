#include <iostream>
#include <cctype>
using namespace std;
double power(int p, int n){
    double result=1;
    for(int i=0;i<n;i++){
        result*=p;
    }
    return result;
}
int main(){
    int p,n;
    cout<<"this programm calculates power of a number"<<endl;
    cout<<"number :- ";
    if(!(cin>>p)){
        cout<<"invalid input using default value 2"<<endl;
        p=2;
        cin.clear();
        cin.ignore();
    }
    cout<<"to the power :-";
    cin>>n;
    cout<<"Calculated value :- "<<power(p,n);
}