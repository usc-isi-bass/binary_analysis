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
	int num[20000],output[20000];        
	int i=0,n=0,j=0,k=0;                 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);                     
		for(j=0;j<k;j++)
			if(num[i]==output[j])
				num[i]=0;                
		if(num[i]!=0)
		{
			output[k]=num[i];
			k=k+1;
		}                                
	}
	for(i=0;i<(k-1);i++)
		printf("%d ",output[i]);
	printf("%d",output[k-1]);                   
	return 0;
}