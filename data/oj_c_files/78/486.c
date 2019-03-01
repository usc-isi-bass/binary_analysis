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
	int a[4],sum=0,i=0,k=0;  //????a[4]???????????sum????????i,k??????
	char rank[4];  //?????rank[4]?????????????????
	rank[0]='z';
	rank[1]='q';
	rank[2]='s';
	rank[3]='l';
	for(a[0]=1;a[0]<=5;a[0]++)
	{
		for(a[1]=1;a[1]<=5;a[1]++)
		{
			if(a[0]==a[1])
				continue;
			for(a[2]=1;a[2]<=5;a[2]++)
			{
				if(a[0]==a[2]||a[1]==a[2])
				    continue;
				for(a[3]=1;a[3]<=5;a[3]++)
				{
					if(a[0]==a[3]||a[1]==a[3]||a[2]==a[3])
				        continue;
					sum=((a[0]+a[1])==(a[2]+a[3]))+((a[0]+a[3])>(a[1]+a[2]))+((a[0]+a[2])<a[1]);
					if(sum==3)
					{
						for(k=5;k>0;k--)
						{
							for(i=0;i<4;i++)
							{
								if(a[i]==k)
									cout<<rank[i]<<' '<<a[i]*10<<endl;
							}
						}
					}
				}
			}
		}
	}
	cin.get();cin.get();
	return 0;
}