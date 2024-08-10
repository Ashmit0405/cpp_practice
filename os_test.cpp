#include<iostream>
#include<thread>
#include<unistd.h>
#include<mutex>
using namespace std;
std::mutex mtx;
//multithreading
int task1(int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        sleep(1);
        printf("Task1 %d\n",i);
        fflush(stdout);
    }
    return 0;
}
int task2(int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        sleep(1);
        printf("Task2 %d\n",i);
        fflush(stdout);
    }
    return 0;
}
static int count=0;
static void taska(){
    mtx.lock();
    for(int i=0;i<10000;i++){
        count++;
    }
    mtx.unlock();
}
int main(){
    // int n1=10,n2=20;
    thread t1(taska);
    thread t2(taska);

    t1.join();
    t2.join();
    printf("Count %d",count);
    return 0;
}