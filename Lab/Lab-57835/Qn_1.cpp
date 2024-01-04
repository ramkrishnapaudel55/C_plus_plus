#include<iostream>
using namespace std;
class Addition{
    public:
    void getSum(){
        cout<<"No argument function "<<endl;
    }
    void getSum(int a){
        cout<<"Two integer type argument function "<<endl;
    }
    void getSum(int a , int b){
        cout<<"2 integer and 1 float type argument function "<<endl;
    }
    void getSum(int a, float b){
        cout<<"1 integer and 1 float type argument function"<<endl;
    }
    void getSum(float a, float b){
        cout<<"2 float type argument function"<<endl;
    }
};

int main(){
    Addition a;
    a.getSum();
    a.getSum(5);
    a.getSum(3, 2);
    a.getSum(2, 4.3f);
    a.getSum(2.2f,1.2f);
    return 0;
}