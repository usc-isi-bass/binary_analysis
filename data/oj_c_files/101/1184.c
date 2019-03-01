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
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
				if(a!=b&&a!=c&&b!=c)
					if((a+(b>a)+(c==a)==3)&&(b+(a>b)+(a>c)==3)&&(c+(c>b)+(b>a)==3))
						for(int i=1;i<=3;i++)
						{
							if(a==i)
								cout<<'A';
							if(b==i)
								cout<<'B';
							if(c==i)
								cout<<'C';
						}
						return 0;
}