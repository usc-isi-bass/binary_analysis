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
	int a[300], i, j, num=0, judge;
    char c;
	for(i=0;i<300;i++)
	{
	    
		scanf("%d%c", &a[i], &c);
		num=num+1;
        if(c=='\n')break;
	}

    int t=0, s=0;
	int k;
	k=a[0];
	if(num==1)	printf("No\n");
	else	
	{  
		judge=0;
		for(i=0;i<num;i++)
		{
			if(a[i]==k) {judge=judge+1;}
		}
	
		if(judge==num) printf("No\n");
		else
		{
			for(j=0;j<num;j++)
			{
				if(a[j]>t)t=a[j];
			}

			for(i=0;i<num;i++)
			{	
				if(a[i]>s && a[i]<t) s=a[i];
			}
	
			printf("%d\n", s);
				
		}
			
			
		
	}
	return 0;
}




		    