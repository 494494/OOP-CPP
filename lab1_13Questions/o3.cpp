#include <iostream>
using namespace std;
int main(){
    int basic,f;
    cout<<"Enter basic pay :- ";
    cin>>basic;
    int gross=basic+46*basic/100+8*basic/100+9*basic/100;
    cout<<"gross_salary  = "<<gross;
    return 0;
}