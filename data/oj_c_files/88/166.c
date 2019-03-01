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
char c[1000];
gets(c);
int i,n,j,t=0;
n=strlen(c);
for(i=t;i<n;i++)
{
if((c[i]>='0')&&(c[i]<='9'))
cout<<c[i];
else
{
for(j=i;j<n;)
{
if((c[j]>='0')&&(c[j]<='9'))
{
cout<<endl;
t=j-1;
j=n;
}
else
j=j+1;
}
}
}
return 0;
}