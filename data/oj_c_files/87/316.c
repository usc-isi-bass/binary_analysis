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
	int a=1,b=1,c=1,d=1,e=1,f=1;
	int s=0;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
	{
if(f<c)
{
	f+=60;
	e-=1;
	s+=f-c;
}
else
{
	s+=f-c;
}
	if(e<b)
	{
e+=60;
d-=1;
s+=60*(e-b);
	}
	else{
	s+=60*(e-b);
		}
	d+=12;
	s+=3600*(d-a);
	printf("%d\n",s);
         s=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}

