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

float abs(float x);
main()
{
	int input[300],i,flag=-1,num,xiabiao=0;
	float average,sum=0.,fst;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&input[i]);
		sum+=input[i];
	}
	average=sum/num;
	fst=abs(input[0]-average);
	for(i=1;i<num;i++)
	{
		if(abs(input[i]-average)>fst){fst=abs(input[i]-average);xiabiao=i;}
	}
	for(i=0;i<num;i++)
		if(abs(input[i]-average)==fst)flag++;
	if(flag==0)printf("%d",input[xiabiao]);
	else
	{
			if(input[xiabiao]<average)
			printf("%d,%d",input[xiabiao],(2*(int)average-input[xiabiao]));
			else 
			printf("%d,%d",(2*(int)average-input[xiabiao]),input[xiabiao]);
	}	
}
float abs(float x)
{
if(x<0)return(-x);
else return(x);
}