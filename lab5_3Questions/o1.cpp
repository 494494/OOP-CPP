#include <iostream>
#include <conio.h>
using namespace std;
class tollBooth{
    private :
    unsigned int Total_no_of_cars;
    double  total_amount;
    public:
    tollBooth(){
        Total_no_of_cars=0;
        total_amount=0;
    }
    void payingCar(){
        Total_no_of_cars+=1;
        total_amount+=0.5;
    }
    void nopayCar(){
        Total_no_of_cars+=1;
    }
    const void display(){
        cout<<"Total no. of Cars = "<<Total_no_of_cars<<endl;
        cout<<"Total amount = "<<total_amount<<endl;
    }
};
int main(){
    tollBooth T;
    char c;
    cout << "Press 'P' for paying car, 'N' for non-paying car.\n";
    cout << "Press ESC to stop.\n";
    do{
        c=getch();
    if(c==80 ||c==112){
        T.payingCar();
        cout<<"entry confirm"<<endl;
    }else if(c==78 ||c==110){
        T.nopayCar();
        cout<<"entry confirm"<<endl;
    }
    else{
        cout<<"Invalid entry"<<endl;
    }
    }while(c!=27);
    T.display();
}
