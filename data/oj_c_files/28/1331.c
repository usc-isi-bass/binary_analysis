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
{char s[10000];
int n,i,sum,j;
gets(s);
n=strlen(s);
j=1;
for(i=0;i<n;i++)
{if(s[i]==' ') j=0;}
if(j) 
{printf("%d",n);}
else
{
for(sum=0,i=0;s[i]!='\0';i++)
 {if(s[i]!=' ')
{sum++;}
else if(s[i]==' '&&sum!=0)
{printf("%d,",sum);
sum=0;}
  }
for(sum=0,i=n-1;;i--)
{
if(s[i]==' '){break;}
else 
sum++;
}
printf("%d",sum);
}
}