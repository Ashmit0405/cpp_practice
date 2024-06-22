#include<iostream>
#include"new.hpp"
using namespace std;
// int c=4;
int main()
{
    // int c=3;
    // cout<<"Size of unsigned long long int= "<<sizeof(unsigned long long int)<<endl;
    // cout<<"Size of  long long int= "<<sizeof(long long int)<<endl;
    // cout<<"Size of  long int= "<<sizeof(long int)<<endl;
    // cout<<"Size of  int= "<<sizeof(int)<<endl;
    // cout<<"Size of double= "<<sizeof(double)<<endl;
    // cout<<"Size of long double= "<<sizeof(long double)<<endl;
    // cout<<"Size of float= "<<sizeof(float)<<endl;
    // // cout<<"Size of long float= "<<sizeof(long float)<<endl;
    // cout<<"Value of local c= "<<c<<endl<<"Value of global c= "<<::c<<endl;
    // int sum=(::c)+c;
    // cout<<"The sum= "<<sum<<endl;
    // int a=4;
    // int* b=&a;
    // cout<<"The address of a= "<<&a<<endl;
    // cout<<"The address of a= "<<b<<endl;    
    // cout<<"The value of a= "<<*b<<endl;   

    // int** c=&b;
    // cout<<"The address of *b= "<<&b<<endl;
    // cout<<"The address of *b= "<<c<<endl;   
    // cout<<"The value of a= "<<**c<<endl;
    // string str="Hello";
    // for(int i=0;i<str.length();i++)
    // {
    //     cout<<str[i]<<endl;
    // }
    int arr[]={1,2,3,4};
    int* p=&arr[0];
    for(int i=0;i<4;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    int s=sum(3,4);
    cout<<s<<endl;
}