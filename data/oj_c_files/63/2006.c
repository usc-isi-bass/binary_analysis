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
 int x1,y1,x2,y2,i,r,m,a[100][100],b[100][100],c[100][100];
 scanf("%d%d",&x1,&y1);
 for(i=0;i<x1;i++)
 {
  for(r=0;r<y1;r++)
  scanf("%d",&a[i][r]);
 }
 scanf("%d%d",&x2,&y2);
 for(i=0;i<x2;i++)
 {
  for(r=0;r<y2;r++)
  scanf("%d",&b[i][r]);
 }
 for(i=0;i<x1;i++)
 {
  for(r=0;r<y2;r++)
  {
  	c[i][r]=0;
  	for(m=0;m<x2;m++)
  	{
  	 c[i][r]+=a[i][m]*b[m][r];
  	}
  }
 }
 for(i=0;i<x1;i++)
 {
 	for(r=0;r<y2;r++)
 	{
 	 if(r==y2-1)
 	 printf("%d\n",c[i][r]);
 	 else
 	 printf("%d ",c[i][r]);
 	}
 }
 return 0;
}