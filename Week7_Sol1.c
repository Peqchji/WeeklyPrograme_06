#include <stdio.h>
int fibonacci(int number)
{
    int result;
    if (number == 0)
        result = 1;
    else if (number == 1)
        result = 1;
    else
    {
        result = fibonacci(number - 2) + fibonacci(number - 1);
    }
    return result; 
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("fibonacci of number %d = %d", num, fibonacci(num));
}
