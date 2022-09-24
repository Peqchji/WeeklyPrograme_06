#include <stdio.h>
int main()
{
    int num, i;
    unsigned long long result = 1, temp_1 = 1, temp_2 = 1;
    scanf("%d", &num);
    for(i = 0; i < num-1; i++){
      result = temp_1 + temp_2;
      temp_2 = temp_1;
      temp_1 = result;
    }
    printf("fibonacci of number %d = %llu", num, result);
}
