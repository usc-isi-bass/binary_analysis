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

struct ys
	{char zm;
int gs;} ys[1001];

void main()
{int i,t,len;
char a[1001]={'\0'};

gets(a);
len=strlen(a);

for(i=0;i<1001;i++)
ys[i].gs=0;


ys[0].zm=a[0];
ys[0].gs=1;
t=0;
for(i=1;i<len;i++)
{if(a[i]==ys[t].zm||a[i]==(ys[t].zm+32)||a[i]==ys[t].zm-32)
ys[t].gs++;
else
{t++;
ys[t].zm=a[i];
ys[t].gs=1;}}

for(i=0;i<=t;i++)
{if(ys[i].zm>='a')
ys[i].zm=ys[i].zm-32;
	printf("(%c,%d)",ys[i].zm,ys[i].gs);}


}
