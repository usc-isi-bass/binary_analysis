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
	int z,q,s,l,w;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					w=15-z-q-s-l;
					if(z*q*s*l*w==120)
					{
						if(z+q==s+l&&z+l>s+q&&z+s<q)
						{cout<<"l"<<" "<<l*10<<endl;
						cout<<"q "<<q*10<<endl;
						cout<<"z "<<z*10<<endl;
						cout<<"s "<<s*10<<endl;}
					}
				}

	return 0;
}

