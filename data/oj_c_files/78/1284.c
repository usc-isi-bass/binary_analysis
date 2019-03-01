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
	int a[5]={10,20,30,40,50}, z, q  ,s, l, i, i2,  i3, i4;
	for(i=0; i < 5; i++)
	{
		z=a[i];
		for(i2=0; i2 < 5;i2++)
		{
			if(i2 == i)
			{
				continue;
			}
			else
			{
				q=a[i2];
				for(i3=0; i3 < 5; i3++)
				{
					if((i3 == i2) ||(i3==i))
					{
						continue;
					}
					else
					{
						s=a[i3];
						for(i4=0; i4 < 5; i4++)
						{
							if((i4 == i)||(i4 == i2)||(i4 == i3))
							{
								continue;
							}
							else
							{
								l=a[i4];
								if(( z+q == s+l) && (z+l > s+q) && (z+s < q))//lqzs
								{
									cout<<"l"<<" "<<l<<endl;
									cout<<"q"<<" "<<q<<endl;
									cout<<"z"<<" "<<z<<endl;
									cout<<"s"<<" "<<s<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
return 0;
}