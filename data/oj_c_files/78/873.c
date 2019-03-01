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
	int z,q,s,l,t;
	for(z=1;z<=5;z++)
	{
		for (q=1;q<=5;q++)
		{
			for (s=1;s<=5;s++)
			{
				for (l=1;l<=5;l++)
				{
					if (z+q==s+l&&z+l>s+q&&z+s<q)
					{
						for ( t = 5 ; t >= 1 ; t -- )
						{
							if ( t == z )
								cout<<"z "<<t*10<<endl;
							if ( t == l )
								cout<<"l "<<t*10<<endl;
							if ( t == s )
								cout<<"s "<<t*10<<endl;
							if ( t == q )
								cout<<"q "<<t*10<<endl;
						}
					}
				}
			}
		}
	}
}




