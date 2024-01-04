#include<iostream>
using namespace std;
int getFactorial(int N);
int main()
{
    int N;
    cout<<"Enter a number\n";
    cin>>N;

    cout<<"The factorial of"<<N<<"="<<getFactorial(N);

    return 0;
}

// Recursive function to find the factorial of a number
int getFactorial(int N){
    if(N<=1){
    return 1;
}
return N*getFactorial(N-1);
}