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

int checkyear(int a)//?????1 
{
	if(	(a%4==0&&a%100!=0)	||	(a%400==0))
		return 1;
	else
	{
		return 0;
	}
}

int main()
{int i,n,a[1000],b[1000],c[1000];
double x ;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d %d %d",&a[i],&b[i],&c[i]);
for(i=0;i<n;i++)
{if(checkyear( a[i]))
{int x[14]={0,0,31,31+29,31+29+31,31+29+31+30,31+29+31+30+31,31+29+31+30+31+30,31+29+31+30+31+30+31,31+29+31+30+31+30+31+31,31+29+31+30+31+30+31+31+30,31+29+31+30+31+30+31+31+30+31,31+29+31+30+31+30+31+31+30+31+30,31+29+31+30+31+30+31+31+30+31+30+31}
 ;if((x[b[i]]-x[c[i]])%7==0)
 printf("YES\n");
 else printf("NO\n");}
 else {int x[14]={0,0,31,31+28,31+28+31,31+28+31+30,31+28+31+30+31,31+28+31+30+31+30,31+28+31+30+31+30+31,31+28+31+30+31+30+31+31,31+28+31+30+31+30+31+31+30,31+28+31+30+31+30+31+31+30+31,31+28+31+30+31+30+31+31+30+31+30,31+28+31+30+31+30+31+31+30+31+30+31}
; if((x[b[i]]-x[c[i]])%7==0)
 printf("YES\n");
 else printf("NO\n");}
                }




getchar();getchar();getchar();

    }

