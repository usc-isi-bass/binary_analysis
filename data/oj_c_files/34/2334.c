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


int main(int argc, char* argv[])
{
int n,i,a[100];
scanf("%d",&n);
	a[1]=n;
	if (n!=1)
{for (i=1;a[i]!=1;i++)
	
{  if (a[i]%2==0) 
	
	
{	a[i+1]=a[i]/2;
	printf("%d/2=%d\n",a[i],a[i+1]);
        }
	if (a[i]%2==1)
        {   a[i+1]=a[i]*3+1;
	printf("%d*3+1=%d\n",a[i],a[i+1]);
        }
    }
    printf("End");
}
	if (n==1)
    printf("End");
return 0;
}