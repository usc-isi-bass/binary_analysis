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
int n,i,a,b,x=0,y=0;

scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a==0&&b==1)
			x++;
		else if(a==1&&b==0)
			y++;
		else if(a==0&&b==2)
			y++;
		else if(a==2&&b==0)
			x++;
		else if(a==1&&b==2)
			x++;
		else if(a==2&&b==1)
			y++;
	}

		if(x>y){
			printf("A");
		}else if(x<y){
			printf("B");
		}else if(x==y){
			printf("Tie");
		}
	


	return 0;
}