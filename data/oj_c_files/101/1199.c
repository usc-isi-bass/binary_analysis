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
	int a,b,c;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(a==b)
				continue;
			for(c=0;c<3;c++)
			{
				if((c==a)||(c==b))
					continue;
				int pa=0,pb=0,pc=0;
				if(	b>a)
					pa++;
				if(a==c)
					pa++;
				if(	a>b)
					pb++;
				if(	a>c)
					pb++;
				if(	c>b)
					pc++;
				if(	b>a)
					pc++;
				if((a==2-pa)&&(b==2-pb)&&(c==2-pc))
				{
					for(int j=0;j<3;j++)
					{
						if(a==j)
							cout<<"A";
						if(b==j)
							cout<<"B";
						if(c==j)
							cout<<"C";
					}
				}
			}
		}
	}
	return 0;
}