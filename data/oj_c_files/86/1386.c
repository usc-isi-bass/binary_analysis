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
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    int m,j;
	scanf("%d",&m);
	 int *a=(int*)malloc(sizeof(int*)*m);
	for(j=0;j<m;j++)
    {
	  scanf("%d",&a[j]); 				
    }
    if(m==0)
    {
	  printf("60\n"); 		
    }
    else if(m==1)
    {
	  if(a[0]<=57)
	  {
	    printf("57\n");				
	  }
	  else
	  {
	  	printf("%d\n",a[0]);   
      } 	 
    }
    else if(m>1)
    {
      for(j=0;j<m-1;j++)
      {
	    if((a[m-1]+3*m)<=60)
	    {
		  int e=60-3*m;
		  printf("%d\n",e); 
		  break;				  
	    }
	    if((a[m-1]+3*m)>60)
		{
	      if((a[j]+3*(j+1))<=60&&(a[j+1]+3*(j+2))>60)
		  {
		    if((a[j+1]+3*(j+1))>60)
		    {
		      int e=60-3*(j+1);
			  printf("%d\n",e); 						 
		    }
		    else
		    {
		      printf("%d\n",a[j+1]); 	  
	        } 										   
	      }
	    } 				
      }
    }
    free(a); 				  
  }
  return 0;	   
}