#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 int i, j ,m, n;
 scanf ("%d", &n);
 for (m=0; m<n; m++)
 {
  char a[SIZE+1]={0}, b[SIZE+1]={0};
  char carry=0;
  char a_str[SIZE+1], b_str[SIZE+1];
  char ab_minus[SIZE+1] = {0};
  int big = 0;
  scanf ("%s", a_str);
  scanf ("%s", b_str);
  for (i = strlen(a_str), j = SIZE ; i>=0 ; i--, j--)
   a[j] = a_str[i] - '0';
  for (i = strlen(b_str), j = SIZE ; i>=0 ; i--, j--)
   b[j] = b_str[i] - '0';
  for (i = SIZE-1; i>= 0; i--)
  {
   if (a[i] - carry < b[i])
   {
    a[i]+=10;
    ab_minus[i] = a[i] - b[i] - carry;
    carry = 1;
   }
   else
   {
    ab_minus[i] = a[i] - b[i] - carry;
    carry = 0;
   }
  }
  for (i=0; i < SIZE-1 && ab_minus[i] == 0; i++);
  for (; i < SIZE; i++)
   printf ("%c", ab_minus[i] + '0');
  printf ("\n");
  }
  return 0;
}