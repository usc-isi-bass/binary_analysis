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
{char a[100],b[100],d='=';
int i,j,k;
gets(a);gets(b);
j=strlen(a);k=strlen(b);
if(j>k)
j=k;
for(i=0;i<j;i++)
{if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-'a'+'A';
if(b[i]>='a'&&b[i]<='z')
b[i]=b[i]-'a'+'A';
if(a[i]>b[i])
{d='>';break;}
else if(a[i]<b[i])
{d='<';break;}
}
printf("%c",d);
return 0;
}