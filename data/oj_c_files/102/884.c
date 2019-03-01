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
	int n,m=0,i,j,k;
	char sex[40][10]={'\0'}; 
	float h[40]={0};
	float temp;
	char tsex[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f",sex[i],&h[i]);
		if(sex[i][0]=='m')
		{
			m=m+1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i;j++)
		{
			if(sex[j][0]=='m')
			{
				if(sex[j+1][0]=='m'&&h[j]>h[j+1])
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
				}
			}
			else if(sex[j][0]=='f')
			{
				if(sex[j+1][0]=='m')
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
					strcpy(tsex, sex[j+1]);
					strcpy(sex[j+1],sex[j]);
					strcpy(sex[j],tsex);
				}
				else if(sex[j+1][0]=='f'&&h[j]<h[j+1])
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
				}

			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(sex[j][0]=='m')
			{
				if(sex[j+1][0]=='m'&&h[j]>h[j+1])
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
				}
			}
			else if(sex[j][0]=='f')
			{
				if(sex[j+1][0]=='m')
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
					strcpy(tsex, sex[j+1]);
					strcpy(sex[j+1],sex[j]);
					strcpy(sex[j],tsex);
				}
				else if(sex[j+1][0]=='f'&&h[j]<h[j+1])
				{
					temp=h[j];
					h[j]=h[j+1];
					h[j+1]=temp;
				}

			}
		}
	}
	for(k=0,i=0;i<40;i++)
	{
		if(h[i]!=0&&k!=0)
		{
		printf(" %.2f", h[i]);
		k++;
		}
		else if (h[i]!=0&&k==0)
		{
			printf("%.2f",h[i]);
			k++;
		}

	}
	return 0;
}