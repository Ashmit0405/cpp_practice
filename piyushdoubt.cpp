#include<iostream>
using namespace std;

int getbit(int N, int position);
int main()
{
    int a;
    int n;
    cout << "Enter the integer" << endl;
    cin >> a;
    cout << "Enter the position.";
    cin >> n;
    cout<<getbit(a, n);
    return 0;
}
int getbit(int N, int position)
{
    return(N & (1 << position) != 0);
}

