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
	for(z=1;z<6;z++)
	for(q=1;q<6;q++)
	{
		if(z==q)
			continue;
		for(s=1;s<6;s++)
		{
			if(s==q||s==z)
				continue;
		for(l=1;l<6;l++)
		{
			if(l==z||l==q||l==s)
				continue;
			if(z+q==l+s)
			if(z+l>s+q)
			if(z+s<q)
			{
				for(i=5;i>0;i--)
				{
					if(i==z)
						cout<<"z"<<" "<<z*10<<endl;
					 else if(i==q)
					    cout<<"q"<<" "<<q*10<<endl; 
					 else if(i==s)
						 cout<<"s"<<" "<<s*10<<endl;
					 else if(i==l)
						 cout<<"l"<<" "<<l*10<<endl;
					 else;
				}
			}
		}
		}
	}
	return 0;
}