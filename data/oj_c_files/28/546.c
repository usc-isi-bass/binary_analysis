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
	char string[9000]; 
	char str[300][30]; 
	char temp[30]=""; 
	int k=0,j=0,i,n,m,l=0; 
	gets(string); 

	n=strlen(string); 
	for (i=0;i<n;i++) 
	{ 
		if ( string[i]!=' ') 
		{ 
			temp[k]=string[i]; 
			str[j][k]=string[i]; 
			k++; 
			l=1;
		} 
		else
		{ 
			if(l==1)
			{
				strcpy(str[j],temp); 
				k=0;
				j++;
			}
			for(m=0;m<30;m++)temp[m]=0; 
			l=0;
		} 
		if(i==n-1)
		{ 
		strcpy(str[j],temp); 
		for(m=0;m<30;m++)temp[m]=0;  
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d,",strlen(str[i]));
	}
	printf("%d",strlen(str[j]));
	return 0;
}
