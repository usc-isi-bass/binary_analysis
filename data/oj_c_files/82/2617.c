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
	int n,p[100][2],i,j,a=0,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(p[i][0]>=90&&p[i][0]<=140&&p[i][1]>=60&&p[i][1]<=90){
			a++;
		}
		else{
			if(a>x){
				x=a;
				a=0;
			}
			else{
				a=0;
			}
		}
	}
	if(a>x){
		x=a;
	}
	printf("%d",x);
	return 0;
}

