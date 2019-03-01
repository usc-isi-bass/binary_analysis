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
int n,a[101],i;
double s=0.0,b=0.0,c=0.0,d=0.0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
                scanf("%d",&a[i]);            
                if(a[i]<=18)
                s+=1;
                else if(a[i]<=35)
                b+=1;
                else if(a[i]<=60)
                c+=1;
                else 
                d+=1;
}
printf("1-18: %.2lf%%\n",s*100/n);
printf("19-35: %.2lf%%\n",b*100/n);
printf("36-60: %.2lf%%\n",c*100/n);
printf("60??: %.2lf%%",d*100/n);
    return 0;    
}
