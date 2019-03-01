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
	int n,y,i,k,m1,m2,a,m[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%4==0&&y%100!=0)||(y%400==0))
		m[1]=29;
		else
		m[1]=28;
		if(m1<m2)
		{
		a=m1;m1=m2;m2=a;
		}
		a=0;
		
		for(k=m2-1;k<m1-1;k++)
		{
			
			a+=m[k];
		}
		if(a%7==0)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	getchar();
	getchar();
	getchar();
	getchar();
	return 0;

}
