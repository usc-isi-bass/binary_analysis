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
{ 
	int n,ch1[350],i,j,k,l,r;
	 scanf("%d\n",&n);
	for(r=0;r<=n-2;r++)
		scanf("%d ",&ch1[r]);
	scanf("%d",&ch1[n-1]);
	for(i=0;i<=n-1;i++)
	 {
	 	  for(j=i+1;j<=n-1;j++)//?????????????????????
		 {
			  if(ch1[j]==ch1[i])
			  {
				  for(k=j+1;k<=n-1;k++)
					  ch1[k-1]=ch1[k];
				  n=n-1;
				  j--;//???????????
			 }
		  }
	}
	printf("%d",ch1[0]);
  for(l=1;l<=n-1;l++)
	  printf(",%d",ch1[l]);
  printf("\n");
}
