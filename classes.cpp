#include<iostream>
using namespace std;

class Employee{
    
    private:
    int a,b,c;//these variables can be accessed only within the class

    public:
    int d,e;//these variables can be accessed anywhere
    void setdata(int,int,int);
    void getdata(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};

void Employee::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee obj;
    obj.d=4;
    obj.e=5;
    obj.setdata(1,2,3);
    obj.getdata();
}