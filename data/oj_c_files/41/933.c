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
	int a[5],b[5],i,sum,c[5],sum1;
	for(a[0]=1;a[0]<=5;a[0]=a[0]+1)
	{
		for(a[1]=1;a[1]<=5;a[1]=a[1]+1)
		{
			if(a[0]!=a[1])
			{
				for(a[2]=1;a[2]<6;a[2]=a[2]+1)
				{
					if(a[2]!=a[0]&&a[2]!=a[1])
					{
						for(a[3]=1;a[3]<6;a[3]=a[3]+1)
						{
							if(a[3]!=a[0]&&a[3]!=a[1]&&a[3]!=a[2])
							{
								for(a[4]=1;a[4]<6;a[4]=a[4]+1)
								{
									if(a[4]!=a[0]&&a[4]!=a[1]&&a[4]!=a[2]&&a[4]!=a[3]&&a[4]!=2&&a[4]!=3)
									{
										sum=0,sum1=0;
										b[0]=(a[4]==1),b[1]=(a[1]==2),b[2]=(a[0]==5),b[3]=(a[2]!=1),b[4]=(a[3]==1);
										for(i=0;i<5;i=i+1)
										{
											if(a[i]==1||a[i]==2)
												sum=sum+b[i];
											else
												sum1=sum1+b[i];
										}
										if(sum==2&&sum1==0)
										{
											for(i=0;i<5;i=i+1)
												c[i]=a[i];
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	for(i=0;i<4;i=i+1)
		cout<<c[i]<<' ';
	cout<<c[4];
	return 0;
}