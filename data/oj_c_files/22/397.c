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
	int i=0;
	char fuhao;
	int j,k,number=0;
	int same=0;
	int a[300]={0};
	do
	{
	scanf("%d%c",&a[i],&fuhao);
	i++;
	}
	while (fuhao!='\n');
    for(j=0;j<=i-1;j++)
	{
		for(k=0;k<=i-1;k++)
		{
			if(a[k]==a[j]&&k!=j) 
			{
				a[k]=0;
			same++;
			}

		}
		if(same==i-1) goto result;
	}


	


	

	for(j=0;j<=i-1;j++)
	{
		for (k=0;k<=i-1;k++)
		{
			if(a[k]>a[j]) 
			{
				number=number+1;
				
			}
		}
		if(number==1) goto result;
		number=0;
		   
	}

result: if(number==1) printf("%d",a[j]);

		else  printf("No");
	    
		
		
		

		


		
	
	return 0;
}
