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
	int n,i,a[201],b[201],x=0,y=0,t=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0){
			if(b[i]==1)x=x+1;
			else if(b[i]==2)y=y+1;
			else if(b[i]==0)t=t+1;
		}
		else if(a[i]==1){
			if(b[i]==1)t=t+1;
			else if(b[i]==2)x=x+1;
			else if(b[i]==0)y=y+1;
		}
	
		else if(a[i]==2){
			if(b[i]==1)y=y+1;
			else if(b[i]==2)t=t+1;
			else if(b[i]==0)x=x+1;
		}
	}
	if(x>y)printf("A");
	else if(x<y)printf("B");
	else if((x==0&&y==0)||x==y)printf("Tie");







return 0;
}
