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
 unsigned int a[301],i,j,k,n,t;  
                  float av,cha[301],temp,sum=0;  
scanf("%d",&n);
	for(i=0;i<n;i++)
           {
              scanf("%d",&a[i]);
              sum=sum+a[i];
	} 
   	av=sum/n;   
	for(j=0;j<n;j++)  
		cha[j]=fabs(a[j]-av); 
         for(j=0;j<n;j++)
            for(k=0;k<n-j-1;k++)
              if(cha[k+1]>cha[k])
                    {temp=cha[k];t=a[k];
                    cha[k]=cha[k+1];a[k]=a[k+1];
                    cha[k+1]=temp;a[k+1]=t;}
 
      if(cha[0]!=cha[1])
           printf("%d",a[0]);
      else
        {if(a[0]>a[1])
           printf("%d,%d",a[1],a[0]);
        else
			printf("%d,%d",a[0],a[1]);}
}


