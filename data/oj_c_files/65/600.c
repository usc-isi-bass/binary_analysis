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
	int n,a,b;
	int p=0,q=0;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((a==0&&b==a)||(a==1&&b==1)||(a==2&&b==2))
			p=p,q=q;
		else if(a==0&&b==1||a==1&&b==2||a==2&&b==0)
			p+=1;
		else if(a==0&&b==2||a==1&&b==0||a==2&&b==1)
			q+=1;
	}
	if(p==q)
		printf("Tie");
	else if(p<q)
		printf("B");
	else if(p>q)
		printf("A");
return 0;
}