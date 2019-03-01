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







void mysort1(float array[],int length)
{
	int i=0,j=0;
	int tmpindex=0;
	double tmpvalue;
	for(i=0;i<length;i++)
	{
		tmpindex=i;
		for(j=i;j<length;j++)
		{
			if(array[j]<array[tmpindex])
			tmpindex=j;
		}
		
		tmpvalue=array[tmpindex];
		array[tmpindex]=array[i];
		array[i]=tmpvalue;
	}
}

void mysort2(float array[],int length)
{
	int i=0,j=0;
	int tmpindex=0;
	double tmpvalue;
	for(i=0;i<length;i++)
	{
		tmpindex=i;
		for(j=i;j<length;j++)
		{
			if(array[j]>array[tmpindex])
			tmpindex=j;
		}
		
		tmpvalue=array[tmpindex];
		array[tmpindex]=array[i];
		array[i]=tmpvalue;
	}
}
		
		
	
	

int main()
{
	int n,i=0,j=0,k,m;
	float marr[40];
	float farr[40];
	char str[8];
	float height;
	scanf("%d",&n);
	
	for(k=0;k<n;k++)
	{
		scanf("%s%f",str,&height);
		if(strcmp(str,"male")==0)
	   {
		  marr[i]=height;
		  
		  i++;
		 
	   }
		else
		{
		farr[j]=height;
		
		j++;
		}
		
	}
	

	mysort1(marr,i);
	mysort2(farr,j);
	
	for(m=0;m<i;m++)
	printf("%.2f ",marr[m]);
	
	for(m=0;m<j-1;m++)
	printf("%.2f ",farr[m]);
	
	printf("%.2f",farr[j-1]);
	
	
	
	
	
	
	
		return 0;
}


	
	
		
		
		
	
	
