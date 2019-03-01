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
     int n,k=1,i;
     int a[6];
     scanf("%d",&n);
     while(n!=0)
     {
            a[k]=n%10;
            n=(n-a[k])/10;
            k=k+1;
     }
     for(i=1;i<=k-1;i++)
     {
                        printf("%d",a[i]);
     }
     //int q;
     //scanf("%d",&q);
     //printf("%d",q);
     return 0;
   
}
