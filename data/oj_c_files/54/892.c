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
{ int i,num,n,k; 
  int change(int n,int k,int num);
  scanf("%d%d",&n,&k);  
  for(i=n+k;;i=i+n)
  { num=i; 
    num=change(n,k,num);
    if(num>0)
    {printf("%d\n",i);
	break;}
  }
  return 0; 
} 
int change(int n,int k,int num)		
{int j;
 for(j=0;j<n;j++)
	 {if(num/n==0||num%n!=k) 
	  break;
      else
      num=num-num/n-k;}
 if(j>=n) return 1;
 else return 0;
} 