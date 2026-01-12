#include <iostream>
using namespace std;
int grade(bool a, bool b, bool c);
int main(){
    float Hardness,Carbon_content,Tensile_strength;
    cout<<"hardness :- ";
    cin>>Hardness;
    cout<<"Carbon_content :- ";
    cin>>Carbon_content;
    cout<<"Tensile_strength :- ";
    cin>>Tensile_strength;
    bool hardness=false,carbonless=false,tensile=false;
    if(Hardness>50)hardness=true;
    if(Carbon_content<0.7)carbonless=true;
    if(Tensile_strength>5600)tensile=true;
    cout<<"grade :- "<<grade(hardness,carbonless,tensile);
    return 0;
}
int grade(bool a, bool b, bool c){
    if(a==true && b==true && c==true)return 10;
    if( a==true && b==true && c==false)return 9;
    if(a==false && b==true && c==true)return 8;
    if(a==true && b==false && c==true)return 7;
    if(a==true || b==true || c==true)return 6;
    if(a==false && b==false && c==false)return 5;
    return 0;
}