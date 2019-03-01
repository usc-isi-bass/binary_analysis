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

struct student
{
	int num;
	int chi;
	int math;
int sum;
};
void main()
{
	int n,i,j,max;
	struct student t,*s;
	scanf("%d",&n);
	s=(struct student *)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{	scanf("%d%d%d",&s[i].num,&s[i].chi,&s[i].math);
	   s[i].sum=s[i].chi+s[i].math;}
	
	max=0;
	for(i=0;i<n;i++)
	{
			if (max<s[i].sum)  {max=s[i].sum;j=i;}
	}
	printf("%d %d\n",s[j].num,s[j].sum);
	s[j].sum=0;	max=0;
		for(i=0;i<n;i++)
	{
			if (max<s[i].sum)  {max=s[i].sum;j=i;}
	}
	printf("%d %d\n",s[j].num,s[j].sum);
	s[j].sum=0;			max=0;
		for(i=0;i<n;i++)
	{
			if (max<s[i].sum)  {max=s[i].sum;j=i;}
	}
	printf("%d %d\n",s[j].num,s[j].sum);
	s[j].sum=0;	
}