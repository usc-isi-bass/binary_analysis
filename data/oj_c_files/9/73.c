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

void main()
{
	char ID[100][10]={'\0'},young[100][10]={'\0'},old[100][10]={'\0'},wae[100]={'\0'};
	int age[100]={0},y[100]={0},o[100]={0};
	int i,n;
	int m=0,k=0,temp=0;
	int a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",ID[i],&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<60)
		{
			strcpy(young[m],ID[i]);
			y[m]=age[i];
			m++;
		}
		else
		{
			strcpy(old[k],ID[i]);
			o[k]=age[i];
			k++;
		}
	}
	for(a=0;a<k-1;a++)
	{
		for(b=0;b<k-a-1;b++)
		{
			if(o[b]<o[b+1])
			{
				temp=o[b];
				o[b]=o[b+1];
				o[b+1]=temp;
				strcpy(wae,old[b]);
				strcpy(old[b],old[b+1]);
				strcpy(old[b+1],wae);
			}
		}
	}
	for(a=0;a<k;a++)
		printf("%s\n",old[a]);
	for(b=0;b<m;b++)
		printf("%s\n",young[b]);
}

