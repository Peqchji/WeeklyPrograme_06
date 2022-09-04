#include <stdio.h>
unsigned long fibonacci(int number)
{
    if (number == 0)
       return 1;
    else if (number == 1)
        return 1;
    else
    {
        return fibonacci(number - 2) + fibonacci(number - 1);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("fibonacci of number %d = %lu", num, fibonacci(num));
    return 0;
}
