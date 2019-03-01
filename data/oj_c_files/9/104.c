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
    struct pat
	{
	   char id[10];
	   int age;
	}pat[201];
    int i,n,j,x=0,y=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",pat[i].id,&pat[i].age);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
		{	pat[100+x]=pat[i];
		x++;}
		else
		{
			pat[y]=pat[i];
			y++;
		}
	}
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-i-1;j++)
		{
			if(pat[100+j].age<pat[101+j].age)
			{
				pat[200]=pat[100+j];
				pat[100+j]=pat[101+j];
				pat[101+j]=pat[200];
			}
		}
	}
	for(i=0;i<x;i++)
		printf("%s\n",pat[100+i].id);
	for(i=0;i<y;i++)
		printf("%s\n",pat[i].id);
}
