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
	int k,t,a[6],b[6];
	for(a[1]=1;a[1]<6;a[1]++)
	{
		for(a[2]=1;a[2]<6;a[2]++)
		{
			for(a[3]=1;a[3]<6;a[3]++)
			{
				for(a[4]=1;a[4]<6;a[4]++)
				{
					for(a[5]=1;a[5]<6;a[5]++)
					{
						for(k=1;k<6;k++)
						{
							for(t=1;t<6;t++)
							{
								if(!(a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[1]==a[5]||a[2]==a[3]||a[2]==a[4]||a[2]==a[5]||a[3]==a[4]||a[3]==a[5]||a[4]==a[5]))
								{
									b[1]=(a[5]==1);
									b[2]=(a[2]==2);
									b[3]=(a[1]==5);
									b[4]=(a[3]!=1);
									b[5]=(a[4]==1);
									if(a[5]!=2&&a[5]!=3)
									if(b[1]+b[2]+b[3]+b[4]+b[5]==2)
									if(k<t)
									if(b[k]==1&&b[t]==1)
									if(a[k]==1||a[k]==2)
									if(a[t]==1||a[t]==2)
									{																							
									printf("%d %d %d %d %d\n",a[1],a[2],a[3],a[4],a[5]);
									break; 
								}
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