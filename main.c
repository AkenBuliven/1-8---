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