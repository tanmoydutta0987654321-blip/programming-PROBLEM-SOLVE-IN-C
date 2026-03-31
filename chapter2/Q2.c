// Q2 area of a circle and circumference of a circle
#include <stdio.h>
int main()
{
    float r, p, area, cf;
    printf("Enter your circle redius :");
    scanf("%f", &r);

    p = 3.14;
    area = p * (r * r);
    cf = 2 * p * r;
    printf("The area of your circle is %f\n", area);
    printf("The circumference of your circle is %f\n", cf);
    return 0;
}