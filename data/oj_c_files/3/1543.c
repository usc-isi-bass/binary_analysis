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
	int n,k,i,j,c,a[1000],b[1000];
		scanf("%d%d",&n,&k);
		j=0;
		c=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[j]=k-a[i];
			j++;
		}
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if(b[j]==a[i]){
					c++;
				}
			}
		}
		if(c!=0){
			printf("yes");
		}
		else{
					printf("no");
				}

		return 0;
}
