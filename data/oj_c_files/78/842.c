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

int main()//?????
{
	int z,q,s,l,i;
	char r[6]={'\0'};
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					if(z==q||z==s||z==l||q==s||q==l||s==l)continue;
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						r[z]='z';
						r[q]='q';
						r[s]='s';
						r[l]='l';
						for(i=5;i>0;i--)
							if(r[i]!='\0')
								cout<<r[i]<<" "<<i*10<<endl;
					}

				}
	return 0;
}//?????