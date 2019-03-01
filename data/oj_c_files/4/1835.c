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
{ int i,j,k,*p[100],m,n;
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
	  p[i]=(int *)malloc(n*sizeof(int));
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	  scanf("%d",p[i]+j);
  for(j=0;j<n;j++)
  {   k=j;
	  for(i=0;i<m;i++)
      {printf("%d\n",*(p[i]+k--));
	   if(k<0) break;}}
  for(i=1;i<m;i++)
  {   k=i;
	  for(j=n-1;j>=0;j--)
      {printf("%d\n",*(p[k++]+j));
	   if(k==m) break;}}
}