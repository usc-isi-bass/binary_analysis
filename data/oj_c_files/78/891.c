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
	for (int z=1;z<=5;z++)
	{
		for (int q=2;q<=5;q++)
		{
			for (int s=1;s<=5;s++)
			{
				for (int l=1;l<=5;l++)
				{
					if ((z+q)==(s+l) && (z+l)>(s+q) && (z+s)<q)
					{
						for (int k=5;k>=1;k--)
						{
							if (z==k)
								cout<<"z"<<" "<<10*z<<endl;
							if (q==k)
								cout<<"q"<<" "<<10*q<<endl;
							if (s==k)
								cout<<"s"<<" "<<10*s<<endl;
							if (l==k)
								cout<<"l"<<" "<<10*l<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
