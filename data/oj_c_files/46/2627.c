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
    int row,col,a[100][100]={0},k,i,j;
	scanf("%d %d",&row,&col);
	
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);

   i=0;
   j=0;
   k=1;
   printf("%d\n",a[0][0]);
   a[0][0]=0;
   while(1)
   {
   while(1)
   {
	   if(a[i][j+1]!=0)
	   {
		   j++;
	   printf("%d\n",a[i][j]);
	   k++;
	   a[i][j]=0;
	   }
	   else
		   break;
   }
   if(k==row*col)
   {
	   break;
   }
   while(1)
     {
	    if(a[i+1][j]!=0)
		{
			i++;
		printf("%d\n",a[i][j]);
	   k++;
	   a[i][j]=0;
		}
	   else
		   break;
   }
	 if(k==row*col)
	 {
		 break;
	 }
	 while(1)
	 {
	   if(j==0)
		   break;
	   else if(a[i][j-1]!=0)
	   {
		   j--;
	   printf("%d\n",a[i][j]);
	   k++;
	   a[i][j]=0;
	   }
	   else
		   break;
   }
	 if(k==row*col)
		 break;
	 while(1)
	 {
	   if(a[i-1][j]!=0)
	   {
		   i--;
	   printf("%d\n",a[i][j]);
	   k++;
	   a[i][j]=0;
	   }
	   else
		   break;
   }
	 if(k==row*col)
	 {
		 break;
	 }
   }
	
	return 0;
	}
