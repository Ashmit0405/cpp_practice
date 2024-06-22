#include<iostream>
using namespace std;

// int sum(int,int);
// int main()
// {
//     int a=10;
//     int b=10000;
//     cout<<"The sum is: "<<sum(a,b)<<endl;
// }

// int sum(int a,int b)
// {
//     return a+b;
// }
/*
//call by value
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

//call by reference
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
*/
void swap(int&,int&);//instead of pointer we can also use reference variable for call by reference
int main()
{
    int a=4,b=5;
    cout<<"The value of a: "<<a<<" and value of b: "<<b<<endl;
    swap(a,b);
    cout<<"The value of a: "<<a<<" and value of b: "<<b<<endl;
}

void swap(int  &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}