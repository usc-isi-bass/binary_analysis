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
	int i,m=0,k=1;
	char a[501],b[501];
	double x,y;
	scanf("%lf",&x);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b)){
		printf("error");
	}
	else
	{
		for(i=0;i<strlen(a);i++){
			if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
				printf("error");
				k=0;
				break;
			}
			else if(a[i]==b[i]){
				m++;
			}    	
		}
		if(k){
          	y=1.0*m/strlen(a);
            if(y>x){
	            printf("yes");
            }else if(y<x||y==x){
               	printf("no");
            }
		}
	}
	return 0;
}