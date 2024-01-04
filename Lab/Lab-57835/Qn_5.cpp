#include<iostream>
using namespace std;
void fun2(){
    cout<<"fun2"<<endl;
    fun1();
}

void fun1(){
    cout<<"fun1"<<endl;
    fun2();
}

int main(){
    fun1();
    cout<<"main Function"<<endl;
    return 0;
}