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
    int n,i;
    scanf("%d",&n);
     int *Stack= (int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++) scanf("%d",Stack+i);
     for(i=n-1;i>=0;i--){if(i==0)printf("%d",*(Stack+i));else printf("%d ",*(Stack+i));}
     return 0;

}
