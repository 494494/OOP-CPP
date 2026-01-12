#include<iostream>
using namespace std;
struct car{
    public:
    //constructor
    car(string y,int p){
        this->color=y;
        this->prise=p;
    }
    //public function
    void displayPrise(){
        cout<<this->prise<<"\n";
        cout<<"enter negotiation prise :- ";
        int y;
        cin>>y;
        changeprise(y);
    }


    private:
    string color;
    int  prise;
    //private function
    void changeprise(int y){
        this->prise=y;
        cout<<"\nnew prise :- "<<this->prise;
    }
};
int main(){
    car newcar("red",1000000);
    newcar.displayPrise();
}