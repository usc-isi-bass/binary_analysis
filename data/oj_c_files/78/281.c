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
	int z,q,s,l,i;
	char a[5];
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						a[z]='z';
						a[q]='q';
						a[s]='s';
						a[l]='l'-1;
					}
	for(i=5;i>=1;i--)
	{
	    if(a[i]>='a'&&a[i]<='z') cout<<a[i]<<" "<<i*10<<endl;
	}
	return 0;
}