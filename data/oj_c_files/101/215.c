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
	int i,j,k,l;
	int a,b,c;
	char m[3];
	int t[3];
	for(i=0;i<=2;i++)
	{
		a=i;
		m[i]='A';
		for(j=0;j<=2;j++)
		{
			b=j;
			if(b==a)
			{
				continue;
			}
			m[j]='B';
			for(k=0;k<=2;k++)
			{
				c=k;
				if(c==a || c==b)
				{
					continue;
				}
				m[k]='C';
				t[0]=(b>a)+(c==a);
				t[1]=(a>b)+(a>c);
				t[2]=(c>b)+(b>a);
				if(a+t[0]==2 && b+t[1]==2 && c+t[2]==2)
				{
					for(l=0;l<3;l++)
					{
						cout<<m[l];
					}
					cout<<endl;
				}
			}
		}
	}
	return 0;
}