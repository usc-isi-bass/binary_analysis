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
	int a[3],b;
	char d,c[3]={'A','B','C'};
	for(int i=1;i<4;i++)//??a
	{
		for(int j=1;j<4;j++)//??b
		{
			if(i!=j)//??ab??????
			{
				for(int k=1;k<4;k++)
				{
					if(i!=k&&j!=k)//??abc?ab??????????????
					{
						int e,f,g;//efg???abc?????????????????????????3(???????3)
						e=(j>i)+(k==i)+i;
						f=(i>j)+(i>k)+j;
						g=(k>j)+(j>i)+k;
						if(e==3&&f==3&&g==3)
						{
							a[0]=i;
							a[1]=j;
							a[2]=k;
							break;//??abc????????
						}
					}
				}
			}
		}
	}
	//???abc?????
	for(int i=0;i<2;i++)//??????????????????????????????????????????
	{
		for(int j=0;j<2-i;j ++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				d=c[j];//???c[j]??a[j]????????
				a[j]=a[j+1];
				c[j]=c[j+1];
				a[j+1]=b;
				c[j+1]=d;
			}

		}

	}		
	for(int i=0;i<3;i++)
		{
			cout<< c[i];
		}

		return 0;
}