#include<stdio.h>
int main()
{
    float a=1.0,b,x=0.0,sum=0.0,product=1.0,arithmetic_mean=0.0,geometric_mean=0.0,harmonic_mean=0.0;
    printf("\nHow many numbers do you want to enter? ");
    scanf("%f",&b);
    while (a<=b)
    {
        printf("\nEnter a number :");
        scanf("%f",&x);
        sum=sum+x;
        product=product*x;
        harmonic_mean=harmonic_mean+(1/x);
        a=a+1;

    }
    arithmetic_mean=sum/b;
    geometric_mean=product/b;
    harmonic_mean=b/harmonic_mean;
    printf("\nThe arithmetic mean is : %.2f",arithmetic_mean);
    printf("\nThe geometric mean is : %.2f",geometric_mean);
    printf("\nThe harmonic mean is : %.2f",harmonic_mean);

}
