#include<iostream>
using namespace std;
struct employee{
    private:
    int days_worked;
    public:
    float fineCal(float days);
    void setdays(int days){
        this->days_worked;
    }
};
float employee :: fineCal(float days){
    float fine=0;
    if(days<=5)return fine+=(float)days*.5;
    if(days>5 &&days<=10)return fine+=(float)2.5+(days-5)*1;
    if(days>30)return 0;
    if(days>10)return fine+=2.5+5+(days-10)*5;
}
int main(){
    employee e1;
    float days;
    cout<<"Enter number of days late :- ";
    cin>>days;
    float fine= e1.fineCal(days);
    if(fine==0){
        cout<<"your membership has been cancelled";
    }else{
        cout<<" your fine for "<<days<< " is :- "<<fine;
    }
    return 0;

}
