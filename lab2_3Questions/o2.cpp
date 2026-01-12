#include <iostream>
using namespace std;
int main(){
    long double sum=0,discount=0;
    long double input=-1;
    while(1){
        cout<<"Enter item price (0 to checkout): ";
        cin>>input;
        cin.get();
        if(input<0){cout<<"Invalid Price !SKIPPED "<<endl;continue;}
        if(input==0)break;
        sum+=input;
    }
    cout<<"total bill (before discount): "<<sum<<endl;
    if(sum>5000){
        discount=sum*10/100;
        sum=sum-discount;
    }
    cout<<"discount applied: "<<discount<<endl;
    cout<<"Final Bill: $"<<sum<<endl;
}