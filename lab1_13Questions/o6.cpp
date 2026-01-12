#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        cout<<i;
    }
    cout<<"\nend;\n";
    int i=0;
    for(;i<10;i++){
        cout<<i;
    }
    cout<<"\nend\n";
    int j=0;
    for(;j<10;){
        cout<<j;
        j++;
    }
    cout<<"\nwhile loop\n";
    int a=0;
    while(a!=10){
        cout<<a;
        a++;
    }
     cout<<"\nend\n";
     int b=0;
    while(1){
        if(b==10)break;
        cout<<b;
        b++;
    }
     cout<<"\ndo-while loop\n";
     int c=0;
     do{
        cout<<c;
        c++;
     }while(c!=10);
      cout<<"\nend\n";
}