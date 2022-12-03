#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
    
     // friend declaration. Eta private or public ekkhane korlei hoy.
    public:
    friend complex sumcomplex(complex o1, complex o2);
    void setdata(int n1,int n2){
        a=n1;
        b=n2;
    }
    void display(){
        cout<<"Your number is "<<a<<"+ "<<b<<" i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}


int main(){
    complex c1,c2, sum;

    //c1 or c2 diye ami friend function call korte parbo na. karon friend function class er 
    // kono member na
    c1.setdata(1,2);
    c1.display();

    c2.setdata(3,4);
    c2.display();
    sum=sumcomplex(c1,c2);
    sum.display();
    
   
return 0;
}
