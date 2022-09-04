#include <stdio.h>
unsigned long fibonacci(int number)
{
    if(number == 0)
    {
      return 0;
    }
    else if(number == 1) {
      return 1;
    }
    else
    {
      return (fibonacci(number-1) + fibonacci(number-2));
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("fibonacci of number %d = %d", num, fibonacci(num));
}
