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



int a[MAXN], f[MAXN] = {0},n,longest_index=-1,longest_f = -1; 



void main() 
{ 
    int i,t; 
    scanf("%d",&n); 
    for (i=0;i<n;++i) 
      scanf("%d",&a[i]); 

	{ 
		int i,j; 
		for (i=0; i<n;++i) 
		  f[i] = 1; 
		for (i=n-2; i >= 0; --i) 
		{ 
		  for (j=i+1;j<n;++j) 
		  { 
			if ((f[i]<f[j]+1 )&& (a[i] >= a[j])) 
			{ 
				f[i]=f[j]+1; 
				if (longest_f<f[i]) 
				{ 
				  longest_f=f[i]; 
				  longest_index=i; 
				} 
			} 
		  } 
		} 
	} 

	printf("%d\n",longest_f);


} 

