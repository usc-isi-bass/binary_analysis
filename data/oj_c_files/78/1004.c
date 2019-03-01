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
	for(z=1;z<=5;z++)
	{
		for(q=1; (q<=5)  ;q++)
		{
			if(q==z)
			{
				continue;
			}
			for(s=1; (s<=5) ;s++)
			{
				if( (s==z) || (s==q) )
				{
					continue;
				}
				for(l=1; (l<=5) ;l++)
				{
					if( (l==z) || (l==q) || (l==s) )
					{
						continue;
					}
					if( (z+q==s+l) && (z+l>s+q) && (z+s<q) )
					{
						for(i=5;i>0;i--)
						{
						    if(z==i)
							    cout<<"z"<<' '<<10*z<<endl;
							if(q==i)
								cout<<"q"<<' '<<10*q<<endl;
							if(s==i)
							    cout<<"s"<<' '<<10*s<<endl;
							if(l==i)
								cout<<"l"<<' '<<10*l<<endl;
						}
					}
				}
			}
		}
	}
}