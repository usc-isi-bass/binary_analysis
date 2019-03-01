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

main()
{
  int n,i,k;
  int num=0;
  scanf("%d",&n);
  int *shuzu=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&shuzu[i]); 				  
  }
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(shuzu[i]==k)
	{
	  num++; 			   
	} 				  
  }
  num=n-num;
 for(i=0;i<n;i++)
  {
    if(shuzu[i]!=k)
	{
	  num--;
	  if(num>0)
	  {
	    printf("%d ",shuzu[i]); 		   
	  }
	  if(num==0)
	  {
	    printf("%d",shuzu[i]); 			
      }		   
	} 				  
  } 
  free(shuzu);
  return 0;
}