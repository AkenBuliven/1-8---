# 1-8---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
	
  int b = 1;
  scanf("%d", &b);

  for (int n = 1; n <= b; n++)
{
	printf ("%d ", n);
}
  return 0;
}

Написать программу выводящую на экран первые 
N
N натуральных чисел.

Входные данные:
Одно  целое число 
N
N, 
N
>
0
N>0

Выходные данные: 
Первые 
N
N натуральных чисел, записанных через пробел.
