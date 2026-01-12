#include <iostream>
using namespace std;
class Product{
    private:
    string name;
    float price;
    float discount;
    public:
    void getdata(string name,float price, float discount){
        this->name=name;
        this->price=price;
        this->discount=discount;
    }
    friend float applyDiscount(Product p);
    string displayProduct(){
        cout<<"--------------------"<<endl;
        return "name = " + name + "\nprice ="+ to_string(price) +"\ndiscount applied = " + to_string(discount*price/100);
    }
};
float applyDiscount(Product p){
    return p.price*(100-p.discount)/100;
}

int main(){
    int n;
    string name;
    float price;
    float discount;
    cout<<"no. of products =";
    cin>>n;
    Product product[n];
    for(int i=0;i<n;i++){
       cout<<i+1<<". Product name =";
       cin>>name;
       cout<<"Product price =";
       cin>>price;
       cout<<"Product discount in percent =";
       cin>>discount;
       product[i].getdata(name,price,discount);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        cout<<"product name"<<product[i].displayProduct()<<endl;
        cout<<"final price = "<<applyDiscount(product[i])<<endl;
        sum+=applyDiscount(product[i]);
    }
    cout<<"----------------------------"<<endl;
    cout<<"*****Grand Total Bill = "<<sum;
}