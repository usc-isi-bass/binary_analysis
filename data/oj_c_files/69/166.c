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
	int al,bl,j,i,m,n=0;
	char a[255],b[255],ab[255],c=62;
	scanf("%s%c%s",&a,&c,&b);
	al=strlen(a);
	bl=strlen(b);
	if(al>bl)
	{
		m=bl;
		bl=al;
		al=m;
		strcpy(ab,a);
		strcpy(a,b);
		strcpy(b,ab);
	}//b is larger than a
	for(i=al-1;i>=0;i--)
	{
		j=i-al+bl;
		b[j]+=a[i]-48;
	}
	for(i=bl-1;i>=0;i--)
	{
		if(b[i]>57)
		{
			b[i]-=10;
			if(i>0)			
				b[i-1]++;
			else
				n=1;
		}
	}
	if(n)
	{
		printf("1");
		printf("%s\n",b);
	}
	else
	{
		for(i=0;i<bl;i++)
		{
			if(b[i]!='0')
			{
				for(j=i;j<bl;j++)
					printf("%c",b[j]);
				break;
			}
			else
				if(i==0 && bl==1)
					printf("0\n");
		}
	}
	return 0;
}