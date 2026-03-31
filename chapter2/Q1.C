//Q1 Swap two numbers
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("The two swap a is %d\n",a);
    printf("Enter 2st number:");
    scanf("%d",&b);
    printf("The two swap b is %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("-----------------------");
    printf("The two swap a is %d",a);
    printf("The two swap b is %d",b);
    return 0;
}