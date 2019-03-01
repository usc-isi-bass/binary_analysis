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

int main (){
int i,lem,len,q;
double p,l;
char m[501],n[501];
scanf("%lf\n",&p);
scanf("%s\n",m);
scanf("%s",n);
lem=strlen(m);
len=strlen(n);
if(lem!=len)
{
printf("error");
return 0;
}
else
q=len;
int r=0;
for(i=0;i<q;i++)
{
	if(((m[i]!='A')&&(m[i]!='T')&&(m[i]!='C')&&(m[i]!='G'))||((n[i]!='A')&&(n[i]!='T')&&(n[i]!='C')&&(n[i]!='G')))
	{
		printf("error");
		break;
	}
	else if(m[i]==n[i])
	{
		r++;
	}
}
if(i==q)
{l=1.0*r/q;
if(l>=p)
printf("yes");
else if(l<p)
printf("no");
}

return 0;
}
  
