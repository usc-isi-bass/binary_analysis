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
	int a=0,b=0,c=0,k=0;
	int c1=0,c2=0,c3=0;
	for(a=1;a<4;a++)
		for(b=1;b<4;b++)
		{
			if(b!=a)
				for(c=1;c<4;c++)
				{
					if(c!=a&&c!=b)
					{
						c1=(b>a)+(a==c);
						c2=(a>b)+(a>c);
						c3=(c>b)+(b>a);
						if(a+c1==3&&b+c2==3&&c+c3==3)
						{
							for(k=1;k<4;k++)
							{
								if(a==k)
									cout <<"A";
								if(b==k)
									cout <<"B";
								if(c==k)
									cout <<"C";
							}
							cout <<endl;
							break;
						}
					}
				}
		}
	return 0;
}
