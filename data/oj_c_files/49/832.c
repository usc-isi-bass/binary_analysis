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
{int b,i,r,x,y,z,n;
char a[600];
scanf("%s",a);
n=strlen(a);
for(i=2;i<=n;i++)
{for(r=0;r<=n-i;r++)
{z=0;
for(y=0;y<=i/2;y++)
{if(a[r+y]!=a[r+i-1-y]){z=1;break;}

}
if(z==0)
for(b=r;b<=r+i-1;b++)
printf("%c",a[b]);
if(b==r+i-1)
{printf("\n");b=0;}
}
}
}