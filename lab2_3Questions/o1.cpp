#include <iostream>
using namespace std;
string strengthCheck(string a){
    //boolian checker
    bool hasDigit=false;
    bool hasUppercase=false;
    bool hasLowercase=false;
    bool hasSpecialChar=false;
    //int counters
    int countDigit=0;
    int countUppercase=0;
    int countLowercase=0;
    int countSpecialChar=0;
    //boolian corrector and counting
    for(int i=0;i<a.length();i++){
        if(a[i]>='0' && a[i]<='9'){
            hasDigit=true;
            countDigit++;
        }
        if(a[i]>='A'&& a[i]<='Z'){
             hasUppercase=true;
            countUppercase++;
            }
        if(a[i]>='a' && a[i]<='z') {
            hasLowercase=true;
            countLowercase++;
        }
        if((a[i]>=21 && a[i]<=26) || a[i]==40||a[i]=='*' ||a[i]=='_' ||a[i]=='.' ||a[i]=='^') {
            hasSpecialChar=true;
            countSpecialChar++;
        }
    }
    //counting out put

    cout<<"Uppercase Letters: "<<countUppercase<<endl;
    cout<<"Lowercase Letters: "<<countLowercase<<endl;
    cout<<"Digits: "<<countDigit<<endl;
    cout<<"special Characters: "<<countSpecialChar<<endl;

    //return strength
    if(  (a.length()<6 || hasLowercase) || (a.length()<6||hasUppercase) ||(a.length()<6||hasDigit )|| (a.length()<6||hasSpecialChar))return "week";
    if((a.length()>=6) && ( (hasLowercase && hasUppercase)||(hasLowercase &&hasDigit)||(hasLowercase&& hasSpecialChar)||(hasUppercase&&hasSpecialChar )||(hasDigit&&hasSpecialChar)))return "Moderate";
    if(a.length()>=8 && hasLowercase && hasUppercase &&hasDigit && hasSpecialChar ) return "Strong";
    return "INVALID Input";
}
int main(){
    string a;
    cout<<"enter password:- ";
    cin>>a;
    cout<<"Password Strength: "<<strengthCheck(a);
}