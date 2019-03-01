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
    int n,i,k;
    scanf("%d",&n);
    int a[100]={0};
    scanf("%d",&k);
    a[k]=a[k]+1;
    printf("%d",k);
   for(i=2;i<=n;i++)
   {
     scanf("%d",&k);
     a[k]=a[k]+1;
     if(a[k]==1)
     printf(" %d",k);
    }
     return 0;
}
     
    
