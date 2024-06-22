#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int x=5;
    int f=-1;
    for(int i=0;i<4;i++){
        if(x==arr[i]){
            f=i;
            break;
        }
    }
    if(f==-1){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}