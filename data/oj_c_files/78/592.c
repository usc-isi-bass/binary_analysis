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
	int z,q,s,l,k,j,m,p;
	char b[4];
	b[0]='z',b[1]='q',b[2]='s',b[3]='l';//?????????
	char n=' ';
	int a[4];
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)//????
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)//????????
					{
						a[0]=z;
						a[1]=q;
						a[2]=s;
						a[3]=l;
						for(j=0;j<4;j++)
						{
							for(k=j+1;k<4;k++)//???????
							{
								if(a[j]<=a[k])
								{
									m=a[j];
									a[j]=a[k];
									a[k]=m;
									n=b[j];
									b[j]=b[k];
									b[k]=n;
								}//?????????????
							}
						}
						for(p=0;p<4;p++)
							cout<<b[p]<<" "<<a[p]*10<<endl;//??
					}
				}
			}
		}
	}
	getchar();
	getchar();
	return 0;
}