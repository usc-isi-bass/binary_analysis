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


int wordsnumber(char a[])
{
	int i=0,num;
	for (;a[i]!='\0';i++)
	{
		num=i;
	}
	num=num+1;
	return (num);
}

void main()
{
	char A[1000]={'\0'},B[300][100]={'\0'};
	int numA,i,t,j,count;
	int num[300];
	gets(A);
	numA=wordsnumber(A);
	for (i=0,t=0,j=0;i<numA;i++)
	{
		if (A[i]!=' ')
		{B[t][j]=A[i];j=j+1;}
		else
		{t=t+1;j=0;}
	}
	for (i=0,count=0;i<t+1;i++)
	{
		if (B[i][0]=='\0') continue;
		count=count+1;
		num[i]=wordsnumber(B[i]);
		
		if (count==1) printf("%d",num[i]);
		else printf(",%d",num[i]);	
	}
	printf("\n");
}
