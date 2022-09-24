#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    long double results, ratio = (1 + sqrt(5))/2;
    scanf("%d", &num);
    results = (pow(ratio, num+1) - pow(-ratio, -(num+1))) / sqrt(5);
    printf("fibonacci of number %d = %.0Lf", num, results);
    if(num > 74)
        printf("Not Accurate value");
    return 0;
}