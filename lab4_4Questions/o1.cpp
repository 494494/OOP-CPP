#include <iostream>
using namespace std;
class RECTANGLE {
    private:
    float length;
    float breadth;
    string name;
    public:
    string diasplayName(){
        return name;
    }
    void getdata(float a, float b,string name){
        this->length=a;
        this->breadth=b;
        this->name=name;
    }
    void display(){
        cout<<"length ="<<this->length<<
        ", breadth ="<<this->breadth<<endl;
    }
    friend float CalculateArea(RECTANGLE a);
    friend float CalculatePerimeter(RECTANGLE a);
    friend RECTANGLE compareArea(RECTANGLE a,RECTANGLE b);
};
float CalculateArea(RECTANGLE a){
    return a.breadth*a.length;
}
float CalculatePerimeter(RECTANGLE a){
        return a.breadth+a.length;
}
RECTANGLE compareArea(RECTANGLE a,RECTANGLE b){
    float area1=CalculateArea(a);
    float area=CalculateArea(b);
    return area1<area?b:a;
}
int main(){
    float len1,len2,width1,width2;
    RECTANGLE plot1,plot2;
    //----------for plot 1-------------
    cout<<"enter length of plot1 = ";
    cin>>len1;
    cout<<"enter breadth of plot1 = ";
    cin>>width1;
    plot1.getdata(len1,width1,"plot1");

    //----------for plot 2-------------
    cout<<"enter length of plot2 = ";
    cin>>len2;
    cout<<"enter breadth of plot2 = ";
    cin>>width2;
    plot2.getdata(len2,width2,"plot2");
    //------------display area-----------
    cout<<"--------------display area-----------"<<endl;
    cout<<"area of plot 1 = "<<CalculateArea(plot1)<<endl;
    cout<<"area of plot 2 = "<<CalculateArea(plot2)<<endl;
    //-----------display prerimeter------
    cout<<"-----------display prerimeter------"<<endl;
    cout<<"perimeter of plot 1= "<<CalculatePerimeter(plot1)<<endl;
    cout<<"perimeter of plot 2= "<<CalculatePerimeter(plot2)<<endl;
    //----------compare plots----------
    RECTANGLE z=compareArea(plot1,plot2);
    cout<<"\n"<<z.diasplayName()<<" is the largest plot"<<endl;
}