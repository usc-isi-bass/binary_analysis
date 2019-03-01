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
	int z=0,q=0,s=0,l=0;
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q+=10)
			for(s=10;s<60;s+=10)
				for(l=10;l<60;l+=10)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						cout<<"l "<<l<<endl;
						cout<<"q "<<q<<endl;
						cout<<"z "<<z<<endl;
						cout<<"s "<<s<<endl;
					}
				}
	return 0;
}
