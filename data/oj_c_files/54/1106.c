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

int qium(int num,int resi);
int main()
{
	int n,p,m;
	scanf("%d %d",&n,&p);
	m=qium(n,p);
	printf("%d",m);
	return 0;
}
int qium(int num,int resi)
{
	int i,j;
	int k=1;
	int a,b;
	i=-1;
	while(k!=num)
	{
		k=1;
		i++;
		a=num*(i+1)+resi;
		b=a;
		for(j=0; ;j++)
		{
			b=(num-1)*(b-resi)/num;
			if((b<num)||(b%num!=resi))
			{
				
				break;
			}
			else
			{
				k++;
			}
		}
	}
	return a;
}
