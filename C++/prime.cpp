#include<iostream>

using namespace std;
int main()
{
    int i,num;

    cout<<"Enter a number:";
    cin>>num;

    for(i=2;i<num-1;i++)
    {
        if(num%i == 0)
        {
            cout<<"Given number is a composite number";
            exit(0);
        }
    }
    cout<<"Given number is a Prime number";
}