#include<stdio.h>
#include<stdlib.h>
struct student{
    int sn;
    char name[50];
    char address[50];
    char contact[10];
};
void main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    struct student s[n];

    for(i=0;i<n;i++)
    {
        printf("S.N.:%d",i+1);
        printf("Enter the name: ");
        gets(s[i].name);
        printf("Enter the address: ");
        gets(s[i].address);
        printf("Enter the contact: ");
        gets(s[i].contact);
    }

    printf("Entered details: \n");
    for(i=0;i<n;i++)
    {
        printf("S.N.:%d",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Address: %s\n",s[i].address);
        printf("Contact: %s\n",s[i].contact);
    }

}