//Q1
#include<stdio.h>
int main(){
    printf("Hello, World!");
    return 0;
}

//Q2
#include<stdio.h>
int main(){
    char name[50]; int age; char address[200];
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your address:");
    fgets(address, sizeof(address), stdin);

    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Address: %s", address);



    return 0;    
}
//Q3
#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of two numbers is %d",sum);
    return 0;
}

//Q4
#include <stdio.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}

//Q5
#include<stdio.h>
int main(){
    float temp,K;
    printf("Enter the current temp :");
    scanf("%f",&temp);
    K=273+temp;
    printf("-------------------");
    printf("Your current tempareture in kelvine is %f",K);

    return 0;
}