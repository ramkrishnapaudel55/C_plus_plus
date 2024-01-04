#include <stdio.h>
void display(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first natural numbers are:\t");
    display(n);
    return 0;
}

void display(int n) {
    if (n > 0){
        display(n-1);
        printf("%d\t", n);
    }
}
