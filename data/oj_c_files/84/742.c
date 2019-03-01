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
	int n;
	int s,t,r;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		int NUMBER;
		scanf("%d",&NUMBER);
		switch(i)
		{
		case 0:
			s=NUMBER;
			break;
		case 1:
			t=NUMBER;
			if(s<t)
			{
				r=s;
				s=t;
				t=r;
			}
			break;
		default:
			if(NUMBER>s)
			{
				r=s;
				s=t;
				t=r;
				r=NUMBER;
				NUMBER=s;
				s=r;
			}
			else if(NUMBER>t)
			{
				r=NUMBER;
				NUMBER=t;
				t=r;
			}
			break;
		}
	}
	printf("%d\n%d\n",s,t);
	return 0;
}