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
	int i,k=0,j;
	int a[5][5]={0},b[5];
   for(i=0;i<5;i++)
	   {for(j=0;j<5;j++)
	   scanf("%d",&a[i][j]);}
   for(i=0;i<5;i++)
	   {for(j=0;j<5;j++)
	   if(a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j]&&a[i][j]<=a[0][j]&&a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
 { k=k+1;
   printf("%d %d %d\n",i+1,j+1,a[i][j]);}
   }
   if(k==0)
	   printf("not found\n");
}