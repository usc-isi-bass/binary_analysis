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
    int a[300],max,min=-1,i,j,temp;
    char c;
    i=0;
    while (c!='\n')
     {scanf("%d%c",&a[i],&c);
     i++;}
     max=a[0];
     for(j=1;j<i;j++)
        {if(a[j]<max&&a[j]>min)min=a[j];
        if(a[j]>max) min=max ,max=a[j];}
    if(min==-1)printf("No");
    else printf("%d",min);

}