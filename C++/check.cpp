#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int i;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2){
        cout<<"prime"<<endl;
    }else{
        cout<<"Not"<<endl;
    }

    return 0;
}