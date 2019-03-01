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
	int n,j,i,a[10000],b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
	  for(i=0;i<a[j];i++){
		if(i==0||i==1){
			b[i]=1;
		}else{
			b[i]=b[i-2]+b[i-1];
		}
	  }
	  printf("%d\n",b[a[j]-1]);
	}
	return 0;
}