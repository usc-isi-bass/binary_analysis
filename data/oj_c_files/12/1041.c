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
	int i,j,line,n;
	for(line=1;;line++){
		int a[16]={0};
		n=0;
	for(i=0;i<16;i++){
	scanf("%d",&a[i]);
	if(a[0]==-1)
		goto A;
	else if(a[i]==0)
		break;
       }
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			if(a[i]==2*a[j]&&a[i]!=0){
			n++;
			break;
			}
		
		}
	}
	printf("%d\n",n);
	}
A:
	return 0;
}