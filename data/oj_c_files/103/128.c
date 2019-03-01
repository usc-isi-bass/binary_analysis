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

char f(char c[1000])
{
int i;
for(i=0;i<1000;i++)
if(c[i]>='a'&&c[i]<='z')
c[i]=c[i]+'A'-'a';
}
main()
{int i,m=1;
char a[1000];
gets(a);
f(a);
for(i=0;a[i]!='\0';i++)
{if(a[i]==a[i+1])
m++;
else 
{printf("(%c,%d)",a[i],m);
m=1;
}
}
}