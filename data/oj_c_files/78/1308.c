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
    int z,q,s,l,a,b,c,i;
	char n[6];
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					a=(z+q==s+l);
					b=(z+l>s+q);
					c=(z+s<q);
					if(a==1&&b==1&&c==1)
					{
						n[z]='z';
						n[q]='q';
						n[s]='s';
						n[l]='l';
						for(i=5;i>=1;i--)
						{
if(i==3)
continue;
							cout<<n[i]<<" "<<i*10<<endl;
						}
					
					}
				}
    return 0;
}