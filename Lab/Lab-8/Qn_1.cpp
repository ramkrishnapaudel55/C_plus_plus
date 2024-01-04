#include<iostream>
using namespace std;
class calculation{
    private:
        int a;
        int b;
    public:
        calculation(int x=0,int y=0){
            a=x;
            b=y;
        }
        int divide(){
            try{
                if(b!=0){
                    return a/b;
                }else{
                    throw "Error Occured";
                }
            }catch(const char *e){
                cout<<e;
            }
        }

};
int main(){
    calculation c1(10,0);
    c1.divide();
    return 0;
}