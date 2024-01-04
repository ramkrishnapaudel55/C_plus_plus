#include <iostream>
using namespace std;
template<typename T>
class Template {
private:
    T l;
    T b;

public:
    Template(){}

    Template(T x, T y){
        l=x;
        b=y; 
    }

    T getSum(){
        return l + b;
    }
};

int main() {
    Template<float> t(5.3, 5.2);
    cout << "Sum: " << t.getSum() <<endl;

    return 0;
}
