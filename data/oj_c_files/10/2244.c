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

int bomb[25],p=0,k,antibomb[25],j=0,answer[2]={0,0};
void makeanti(int a[]);
void main()
{
	int i;
	scanf("%d",&k);
	for(i=0;i<k;i++) scanf("%d",&bomb[i]);
	makeanti(bomb);
	printf("%d",answer[0]);
	getchar();
	getchar();
}
void makeanti(int bomb[])
{
	int i,l,r=0,aa;
	if(k==0)
	{
		answer[1]=j;
		answer[0]=answer[0]>answer[1]?answer[0]:answer[1];
	}
	else
		for(i=0;i<k;i++)
		{
			if(j==0) antibomb[j++]=bomb[i];
			else if(bomb[i]<=antibomb[j-1]) 
			{
				antibomb[j++]=bomb[i];
				r=1;
			}
			else if(r==0&&i==k-1)
			{
				answer[1]=j;
			 answer[0]=answer[0]>answer[1]?answer[0]:answer[1];
				continue;
			}
			else continue;
			k-=(i+1);
			for(l=0;l<=i;l++) bomb++;
			makeanti(bomb);
			j--;
			k+=(i+1);
			for(l=0;l<=i;l++) bomb--;
		}
}
