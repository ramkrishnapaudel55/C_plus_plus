#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imag;

    public:
        Complex(){
            real=0;
            imag=0;
        }
        Complex(int r,int i){
            real=r;
            imag=i;
        }
        void showData(){
            cout<<real<<" + "<<imag<<" i"<<endl;
        }
        Complex operator + (Complex &c){
            Complex c4;
            c4.real = real + c.real;
            c4.imag = imag + c.imag;
            return c4;
        }
    
};

int main(){
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3;
    
    c3=c1+c2;
    c3.showData();
    return 0;
}