#include<iostream>
using namespace std;

typedef struct employ{
    string name;
    long empno;
    float salary;
}ep;

ep data_emp[2];
int main()
{
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the name of employee "<<i+1<<": ";
        cin>>data_emp[i].name;
        cout<<"Enter the number of employee "<<i+1<<": ";
        cin>>data_emp[i].empno;
        cout<<"Enter the salary of employee "<<i+1<<": ";
        cin>>data_emp[i].salary;
        cout<<endl;
    }
    cout<<"The details are :"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"The name of employee "<<i+1<<": "<<data_emp[i].name<<endl;
        cout<<"The number of employee "<<i+1<<": "<<data_emp[i].empno<<endl;
        cout<<"The salary of employee "<<i+1<<": "<<data_emp[i].salary<<endl;
        cout<<endl;
    }

}