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


int reverse(int num)
{
 int a = 0, b;
 while (num != 0)
 {
  b = num % 10;
  a = a * 10 + b;
  num = num / 10;
 }
 return a;
}
int main()
{
    int num;
    while (cin >> num)
    {
        cout << reverse(num) <<endl;
}
    return 0;

} 