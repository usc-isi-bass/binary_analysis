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
	int z,q,s,l,m=0,n=0,g=0,i,j,a,b;
	for(i=1;i<=5;i++)
	{
		z=i*10;
		for(j=1;j<=5;j++)
		{
			q=j*10;
			for(a=1;a<6;a++)
			{
				s=a*10;
				for(b=1;b<6;b++)
				{
					l=b*10;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						
						cout << "l" << " " << l << endl
							 << "q" << " " << q << endl
							 << "z" << " " << z << endl
							 << "s" << " " << s << endl;
						m=1;
						break;
					}
				}
				if(m==1)
				{
					n=1;
					break;
				}
			}
			if(n==1)
			{
				g=1;
				break;
			}
		}
		if(g==1)
			break;
	}
	return 0;
}