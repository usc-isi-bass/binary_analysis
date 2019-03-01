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
  int row,col;  
  int b,c,d,e,k,i;
  int a[100][100];
  scanf("%d%d",&row,&col);
  for(k=0;k<row;k++)
  {
    for(i=0;i<col;i++)
    {
		scanf("%d",&a[k][i]);
	}
  }
  b=0;
  d=0;
  c=col-1;
  e=row-1;
  for(;b<=c&&d<=e;b++,d++,c--,e--)
  {
	if(b!=c&&d!=e)
    {
	  for(i=b;i<c;i++)
		printf("%d\n",a[d][i]);	  
	  for(i=d;i<e;i++)   
		printf("%d\n",a[i][c]);	  
	  for(i=c;i>b;i--)      
		printf("%d\n",a[e][i]);	  
	  for(i=e;i>d;i--)    
		printf("%d\n",a[i][b]);      
	 }
     else if(b==c)
     {
		for(i=d;i<=e;i++)        
			printf("%d\n",a[i][b]);			
	  }
      else if(d==e)
      {
		for(i=b;i<=c;i++)
			printf("%d\n",a[d][i]);			
	   }
	
  }
return 0;
}
