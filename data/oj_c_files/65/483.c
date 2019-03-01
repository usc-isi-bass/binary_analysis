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

 int n,a,b,i,c,k=0,j=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {scanf("%d %d",&a,&b);
    c=a-b;
	if(c==-1||c==2)  k++;
	else if(c!=0) j++;
  }
  if(k>j)  printf("A");
  else if(k==j)  printf("Tie");
  else     printf("B");
return 0;
}