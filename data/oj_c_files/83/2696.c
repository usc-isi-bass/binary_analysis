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

int main(){
	int xuefen[10],fenshu[10];
	int n;
	int a=0;
	float jidian[10],sum=0,m,GPA;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		a+=xuefen[i];
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&fenshu[i]);
		if(fenshu[i]>=90&&fenshu[i]<=100)
		{jidian[i]=4.0;}
		if(fenshu[i]>=85&&fenshu[i]<=89)
		{jidian[i]=3.7;}
		if(fenshu[i]>=82&&fenshu[i]<=84)
		{jidian[i]=3.3;}
		if(fenshu[i]>=78&&fenshu[i]<=81)
		{jidian[i]=3.0;}
		if(fenshu[i]>=75&&fenshu[i]<=77)
		{jidian[i]=2.7;}
		if(fenshu[i]>=72&&fenshu[i]<=74)
		{jidian[i]=2.3;}
		if(fenshu[i]>=68&&fenshu[i]<=71)
		{jidian[i]=2.0;}
		if(fenshu[i]>=64&&fenshu[i]<=67)
		{jidian[i]=1.5;}
		if(fenshu[i]>=60&&fenshu[i]<=63)
		{jidian[i]=1.0;}
		if(fenshu[i]<=60)
		{jidian[i]=0;}
		m=xuefen[i]*jidian[i];
		sum+=m;
	}
	GPA=sum/a;
	printf("%.2f",GPA);
	return 0;
}
