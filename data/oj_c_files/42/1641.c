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
	int i,j,n,m,k=0;
	scanf("%d",&n);
    int *p;
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    scanf("%d",&m);
    for(i=0;i<n-k;i++){
    	if(*(p+i)==m){
	       k++;
		   for(j=i;j<n-k;j++)
		      *(p+j)=*(p+j+1);
           i--;
	    }    	
    }
    for(i=0;i<n-k-1;i++)
   	printf("%d ",*(p+i));
   	printf("%d",*(p+n-k-1));
}