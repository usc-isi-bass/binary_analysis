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
  int m,n,k;
  scanf("%d",&k);
  int i;
  for(i=0;i<k;i++)
  {
  scanf("%d %d",&m,&n);
  char a[100][100];
  int j,l;
  
  for(j=0;j<m;j++)
  {
     for(l=0;l<n;l++)
	 {
	   scanf("%d",&a[j][l]);
	 }
  }
  int sum=0;
  if(m==1)
  { for(l=0;l<n;l++)
  sum=sum+a[0][l];}
	 else
	 {for(l=0;l<n;l++)
	 sum=sum+a[0][l]+a[m-1][l];}
	 if(n==1)
	 {for(j=1;j<m-1;j++)
	 sum=sum+a[j][0];}
	 else
	 {
  for(j=1;j<m-1;j++)
	  sum=sum+a[j][0]+a[j][n-1];
	 }
  printf("%d\n",sum);
  }
}