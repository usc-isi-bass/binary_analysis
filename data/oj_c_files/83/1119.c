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
	int xuefen[10];
	int chengji[10];
	float jidian[10];
	int n,i,he=0;
	float sum=0,GPA;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&xuefen[i]);
	for(i=0;i<n;i++){
		scanf("%d",&chengji[i]);
		if(chengji[i]>=90&&chengji[i]<=100)
			jidian[i]=4.0;
		if(chengji[i]>=85&&chengji[i]<=89)
			jidian[i]=3.7;
		if(chengji[i]>=82&&chengji[i]<=84)
			jidian[i]=3.3;
		if(chengji[i]>=78&&chengji[i]<=81)
			jidian[i]=3.0;
		if(chengji[i]>=75&&chengji[i]<=77)
			jidian[i]=2.7;
		if(chengji[i]>=72&&chengji[i]<=74)
			jidian[i]=2.3;
		if(chengji[i]>=68&&chengji[i]<=71)
			jidian[i]=2.0;
		if(chengji[i]>=64&&chengji[i]<=67)
			jidian[i]=1.5;
		if(chengji[i]>=60&&chengji[i]<=63)
			jidian[i]=1.0;
		if(chengji[i]<60)
			jidian[i]=0;
	}
	for(i=0;i<n;i++){
		sum+=(float)xuefen[i]*jidian[i];
		he+=xuefen[i];}
	GPA=(float)sum/he;
	printf("%.2f",GPA);
}
