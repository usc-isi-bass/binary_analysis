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

char a[1001]={0};
void f()
{
int l,i;
l=strlen(a);
for(i=0;i<l;i++)
if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-'a'+'A';}

int main()
{int b[1000]={0},l,i,j;
cin>>a;
f();
l=strlen(a);
i=0;
while(i<l)
{for(j=0;j<l-i;j++)
{if(a[i+j]==a[i])
b[i]++;
else break;}
i=i+j;}
for(i=0;i<l;i++)
{if(b[i]!=0)
cout<<"("<<a[i]<<","<<b[i]<<")";}
return 0;
}