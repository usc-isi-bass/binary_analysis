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
	int i,sum=0,m,n;
	double x;
	scanf("%lf",&x);
	char c1[501],c2[501];
	scanf("%s",c1);
	scanf("%s",c2);
    m=strlen(c1);
	n=strlen(c2);
	if(m==n){
		for(i=0;i<m;i++){
			if((c1[i]!='A'&&c1[i]!='T'&&c1[i]!='C'&&c1[i]!='G')||(c2[i]!='A'&&c2[i]!='T'&&c2[i]!='C'&&c2[i]!='G')){
				sum++;
			}
		}
		if(sum!=0){
			printf("error");
		}else{
			for(i=0;i<m;i++){
				if(c1[i]==c2[i]){
					sum++;
				}
			}
			if((double)sum/m>x){
				printf("yes");
			}else{
				printf("no");
			}
		}
	}else if(m!=n){
		printf("error");
	}
	return 0;
}
