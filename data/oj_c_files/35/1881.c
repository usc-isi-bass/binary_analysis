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
  int a[20][20],i,j,m,n,flag1,flag2,flag=0;
  int h,l;
  scanf("%d,%d",&h,&l);
  for(i=0;i<h;i++)
  {
    for(j=0;j<l;j++)
	{
	 scanf("%d",&a[i][j]);
	
	}
  
  }
  for(i=0;i<h;i++)
  {
   for(j=0;j<l;j++)
   {
	   flag1=1;
	   flag2=1;
    for(m=0;m<l;m++)
	{
	  if(a[i][j]<a[i][m]) flag1=0;
	}
    for(n=0;n<h;n++)
	{
	  if(a[i][j]>a[n][j]) flag2=0;
	
	}
	if((flag1*flag2)!=0) 
	{
		printf("%d+%d",i,j);
        flag=1; 	
	}
   }
  
  }
if(flag==0) printf("No");


}
