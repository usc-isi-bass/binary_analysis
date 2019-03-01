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
	int a,b;
	int n,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==b){c=c;}
		else if(a-b==1){c=c-1;}
		else if(b-a==1){c+=1;}
		else if(a-b==2){c+=1;}
		else if(b-a==2){c=c-1;}
	}
	if(c>0){printf("A");}
	else if(c<0){printf("B");}
	else{printf("Tie");}
return 0;
}

