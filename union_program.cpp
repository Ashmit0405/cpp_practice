#include<iostream>
using namespace std;

union money{
int coins;
float rupees;
char name_first;
};
//here in union we can only use one variabel at a time and the value of other data type will be deleted so it provides garbage value
int main()
{
    union money josh;
    josh.coins=237451;
    josh.rupees=90.00;
    josh.name_first='t';
    cout<<josh.coins<<endl;
    // cout<<josh.rupees<<endl;
    // cout<<josh.name_first<<endl;
}