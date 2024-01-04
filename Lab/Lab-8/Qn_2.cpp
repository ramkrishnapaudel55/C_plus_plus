#include<iostream>
using namespace std;
template <typename T>
T getSum(T a, T b){
    return a+b;
}

int main(){
    cout<<getSum(5,7)<<endl;
    cout<<getSum(5.5f, 6.7f)<<endl;
    cout<<getSum(5.9f,6.9f)<<endl;

    char a=5;
    char b='A';
    cout<<getSum(a,b)<<endl;
    return 0;
}