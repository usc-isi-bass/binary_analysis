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
	int n,i,j,r,a;
	scanf("%d",&n);
	if(n<5){
		printf("empty");
	}
	else{
		for(i=3;i<=n-2;i++){
			for(j=2;j<i;j++){
				if(i%j==0){
					break;
				}else{
					if(j!=i-1){
						continue;
					}
					else{
						for(r=2;r<i+2;r++){
							if((i+2)%r==0){
								break;
							}
							else{
								if(r!=i+1){
									continue;
								}
								else{
									a=i+2;
									printf("%d %d\n",i,a);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}