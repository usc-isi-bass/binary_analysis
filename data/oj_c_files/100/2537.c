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
{char a[301];
int n,i,s[53]={0},flag=0;
int f (char b,int s[]);
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
if(f(a[i],s))
flag++;
}
if(flag==0)
printf("No");
else {
for(i=0;i<52;i++)
{if(s[i]==0)
continue;
else
{if(i>=26&&i<=52)
printf("%c=%d\n",i+71,s[i]);
if(i>=0&&i<=25)

printf("%c=%d\n",i+65,s[i]);
}
}
}
return 0;
}
int f (char b,int s[])
{int flag=0;
	if(b>=65&&b<=90)
{s[b-65]++;
flag=1;}
if(b>=97&&b<=122)
{s[b-71]++;
flag=1;}
return flag;
}