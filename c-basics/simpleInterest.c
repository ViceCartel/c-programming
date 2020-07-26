#include<stdio.h>
/*Calculation of simple interest */
main()
{
    int p,n;
    float si, r;
    printf("Enter the principle\n");
    scanf("%d", &p);
    printf("Enter number of years\n");
    scanf("%d", &n);
    printf("Enter the rate\n");
    scanf("%f", &r);

    si = p*n*r/100;
    printf("The simple interest = %f\n", si);
}
