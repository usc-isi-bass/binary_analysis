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
	int z,q,s,l;
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q=q+10)
			for(s=10;s<=50;s=s+10)
				for(l=10;l<=50;l=l+10)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q&&z!=s&&z!=q&&z!=l&&s!=q&&s!=l&&q!=l)
					{
                     for(int i=50;i>=10;i=i-10)
					 {
						 if(z==i)
							 cout<<"z "<<i<<endl;
                         if(l==i)
							 cout<<"l "<<i<<endl;
						 if(s==i)
							 cout<<"s "<<i<<endl;
						 if(q==i)
							 cout<<"q "<<i<<endl;
					}
					}
				}
				return 0;
}
