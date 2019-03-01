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

int main()                                 //???
{                                          //?????
	int m,a,b,i,k,y=1,x=1;                     //????
	cin >> m;                              //??m??
	for (a=3;a<=m/2;a=a+2)
	{
		x=1;
		y=1;
		for (i=3;i<=a-1;i=i+2)
		{
			if (a%i==0)
			{
				x=0;
				break;
			}
		}
		if (x==1)
		{
			for (k=3;k<=m-a-1;k=k+2)
			{
					if ((m-a)%k==0)
					{
						y=0;
						break;
					}
			}
			if (y==1)
			{
			cout << a << " " << m-a << endl;
			}
		}
	}
	return 0;
}