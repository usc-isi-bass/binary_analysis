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

int main(){
	int a,i;
	int b[2][3]={0};
	scanf("%d",&a);
	b[0][0]=3;
	b[0][1]=5;
	b[0][2]=7;
	for(i=0;i<3;i++){
		if(a%b[0][i]==0)
			b[1][i]=1;
		else
			b[1][i]=0;}
	if(b[1][0]==0&&b[1][1]==0&&b[1][2]==0)
		printf("n");
	else{
		if(b[1][0]==1&&b[1][1]==1&&b[1][2]==1)
			printf("3 5 7");
		else{
			if(b[1][0]==0&&b[1][1]==1&&b[1][2]==1)
				printf("5 7");
			else{
				if(b[1][0]==0&&b[1][1]==0&&b[1][2]==1)
					printf("7");
				else{
					if(b[1][0]==1&&b[1][1]==1&&b[1][2]==0)
						printf("3 5");
					else{
						if(b[1][0]==1&&b[1][1]==0&&b[1][2]==0)
							printf("3");
						else{
							if(b[1][0]==1&&b[1][1]==0&&b[1][2]==1)
								printf("3 7");
							else{
								if(b[1][0]==0&&b[1][1]==1&&b[1][2]==0)
									printf("5");}
						}
					}
				}
			}
		}
	}
	return 0;
}