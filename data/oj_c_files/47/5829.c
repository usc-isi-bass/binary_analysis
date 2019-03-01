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

	int n=0;
	cin>>n;
	int a[100]={0},b[100]={0};
	for(int i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);            //????
	}
	
	for(int i=0;i<n;i++)             //????
		b[i]=a[n-i-1];
  for(int i=0;i<n-1;i++)
	{ 
                printf("%d ",b[i]);   //????
                                  }
   printf("%d",b[n-1]);
}