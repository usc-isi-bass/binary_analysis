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
    int data[20] = {1,1};
    int n;
    int a;
    int i, j;
    
    for(j = 2; j <= 19; j++)
                data[j] = data[j - 2] + data[j - 1];
    
    scanf("%d", &n);
    
    for(i = 0; i <= n - 1; i++)
    {
          scanf("%d", &a);
          printf("%d\n", data[a - 1]);
    }
    
    return 0;
}
          
          
          
          
