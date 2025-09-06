#include <stdio.h>
#include <math.h>

int main() {

    double principle = 0.0;
    double rate = 0.0;
    int years = 0;
    double timescomp = 0.0;
    double total = 0.0;

    printf("compound interest calculator\n");

    printf("enter the principal (p): ");
    scanf("%lf", &principle);

    printf("Enter the interest rate %(r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("enter the number of years : ");
    scanf("%d", &years);

    printf("enter number of times compounded p years (n): ");
    scanf("%lf", &timescomp);

    total = principle*(pow((1+(rate/timescomp)),timescomp * years));
    printf("%lf", total);




//sigma
}
