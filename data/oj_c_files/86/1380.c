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
{   int m,n,i,j,t=0;
    int a[500];
	scanf("%d",&m);
	for(j=1;j<=m;j++){
		for(i=0;i<500;i++){
			a[i]=0;
		}
		scanf("%d",&n);
		if(n==0){
			printf("60\n");
		}
		else{
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++){
				if(a[i]+3*(i+1)>60){
					t=1;
					if(a[i]+3*i<60){
						printf("%d\n",a[i]);
					}
					else{
						printf("%d\n",60-3*i);
					}
					break;
				}
			}
			if(t==0){
				printf("%d\n",60-3*n);
			}
			t=0;
		}
	}
	return 0;
}