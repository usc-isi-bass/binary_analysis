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
	int zWeight,qWeight,sWeight,lWeight;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						zWeight=10*z;
						qWeight=10*q;
						sWeight=10*s;
						lWeight=10*l;
					}
				}
			}
		}
	}
	if(lWeight>qWeight&&qWeight>zWeight&&zWeight>sWeight)
			{
			cout<<"l"<<" "<<lWeight<<endl;
			cout<<"q"<<" "<<qWeight<<endl;
			cout<<"z"<<" "<<zWeight<<endl;
			cout<<"s"<<" "<<sWeight<<endl;
			}
	if(lWeight>qWeight&&qWeight>sWeight&&sWeight>zWeight)
			{
			cout<<"l"<<" "<<lWeight<<endl;
			cout<<"q"<<" "<<qWeight<<endl;
			cout<<"s"<<" "<<sWeight<<endl;
			cout<<"z"<<" "<<zWeight<<endl;
			}

}
