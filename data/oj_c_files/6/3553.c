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

void main()
{int *pi,i=0,j=0,k=1,sum=0,n,m,z,t;
scanf("%d",&k);

for(t=0;t<k;t++)
{sum=0;
scanf("%d %d",&m,&n);
int *p=(int*)malloc((n*m)*sizeof(int));
pi=p;
for(z=0;z<m*n;z++,pi++)
scanf("%d",pi);
pi=p;

for(j=0;j<m*n;pi++)
{j++;
if(j<n+1||j>((m-1)*n)||j%n==1||j%n==0)
sum=sum+*pi;
}
printf("%d\n",sum);

}

}