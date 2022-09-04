#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    double results, ratio = (1 + sqrt(5))/2;
    scanf("%d", &num);
    results = (pow(ratio, num+1) - pow(1-ratio, num+1))/ (ratio-(1-ratio));
    printf("fibonacci of number %d = %.0lf", num, results);
    return 0;
}