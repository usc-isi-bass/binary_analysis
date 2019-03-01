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
{int a,n,b,c=0,d=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d %d",&a,&b);
if (a==0)
{if(b==1)
c+=1;
if(b==2)
d+=1;
}

if (a==1)
{if(b==2)
c+=1;
if(b==0)
d+=1;
}

if (a==2)
{if(b==1)
d+=1;
if(b==0)
c+=1;
}
}
if(c>d)
printf("A");

if(c<d)
printf("B");

if(c==d)
printf("Tie");

return 0;
}