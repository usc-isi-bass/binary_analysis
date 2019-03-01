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
    int f(int n);
    int n,a,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        int s;
        
        scanf("%d",&a);
        s=f(a);
        printf("%d\n",s);
        }
     getchar();
     getchar();
}
int f(int n)
{
    int z;
    if(n==1||n==2)
      z=1;
     else
     z=f(n-1)+f(n-2);
     return(z);
}              
