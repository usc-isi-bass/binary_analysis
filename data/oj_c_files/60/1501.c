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
	int n,i,f=0;
	int isSuShu(int i);
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		if(isSuShu(i)) 
		{
			if(isSuShu(i+2))
			printf("%d %d\n",i,i+2),f=1;
			else continue;
			}
		else continue;		
		}
		if(f==0) printf("empty");
		return 0;
	}
	
int isSuShu(int i)
	{
		int j,k=1;

		for(j=2;j<i;j++)
		if(i%j==0) return 0;
		else 	{k++;if(k==i-2||k==i-1) return 1;}
		}

