#include<stdio.h>
void TOH(int, char,char, char);
void main()
{
    int n;
    char a,b,c;
    printf("Enter the value of the number: ");
    scanf("%d",&n);
    TOH(n,'a','b','c');
}
void TOH(int n,char a,char b,char c)
{
    if(n==1){
        printf("\nMove disc from %c -> %c\n",a,b);
    }
    else{
        TOH(n-1,a,c,b);
        TOH(1,a,b,c);
        TOH(n-1,b,b,c);
    }

}