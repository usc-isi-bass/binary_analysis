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
	char z[100];
	char q[50],p[50];
	int j=0;
	int sum,i,k,n,m=0,l=0;
	gets(z); 
   
   
//	for(i=0;z[i]!='')

	n=strlen(z);
	
	for(i=0;i<=n-1;i++){
		if(z[i]!=' '){
			p[i]=z[i];
			m++;
		}
		if(z[i]==' '){
			break;
		}
	}
	for(i=m+1;i<=n-1;i++){
		q[j]=z[i];
		j++;
		l++;
	
	}
	for(i=0;i<l;i++)
	{
		if(q[i]==p[0])
		{
			sum=1;
			for(k=i+1;k<=i+m-1;k++)
			{
				if(q[k]==p[k-i])
				{
					sum++;
				}
				else
					break;
			}
			if(sum==m)
			{
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}
