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
	int n,i,s,max;
	int a[100];
	int b[100];
	int c[100];
	
	scanf("%d",&n);
	max=0;
	s=0;
	c[0]=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&(a[i]),&(b[i]));
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[s]++;
		}else{
			if(c[s]>max){
				max=c[s];
			}
			s++;
			c[s]=0;
		}
		if(c[s]>max){
				max=c[s];
			}
	}
	printf("%d\n",max);
	return 0;
}