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
	int a,b,c,d,e,words[6]={0};
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b!=a)
			{
				for(c=1;c<=5;c++)
				{
					if(c!=a && c!=b)
					{
						for(d=1;d<=5;d++)
						{
							if(d!=a && d!=b && d!=c)
							{
								e=15-a-b-c-d;
								if(e!=2 && e!=3)
								{
								words[a]=(e==1);words[b]=(b==2);words[c]=(a==5);
								words[d]=(c!=1);words[e]=(d==1);

								if(words[1]==1 && words[2]==1 && words[3]==0 && words[4]==0 && words[5]==0)

									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;}
		

							}
						}
					}
				}
			}
		}
	}
	
	

}