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
	int i,j,k;
	int n,del,counter=0,p=0;
	int *a;
    scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));	;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>del;

	for(j=0;j<n;j++)
	{
		if(a[j]==del)
		{
			 counter=counter+1;
             for(k=j+1;k<n;k++)
				 if(a[k]!=del)
				 {
					 a[j]=a[k];
                     for(i=k;i<n;i++)
					 {
						 a[i]=a[i+1];
					 }
					  
					 goto end;
				 }
 
		}
		end:;
	}

	for(i=0;i<n-counter;i++)
	{
		if(p!=0)
		cout<<" ";
		cout<<a[i];
		p=1;
	}
    
                  
    return 0;
}
                