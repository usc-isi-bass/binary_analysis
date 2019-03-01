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
	int a[256],n,i,j,c1,c2,c3,c4,k;
	float d;
	char s1[200],s2[200];
	scanf("%s %s",s1,s2);
	memset(a,0,sizeof(a));
	c1=strlen(s1);
	c2=strlen(s2);
	for(i=0;i<c1;i++){
		k=s1[i];
		a[k]++;
	}
	for(i=0;i<c2;i++){
		k=s2[i];
		a[k]--;
	}
	c3=1;
	for(i=0;i<256;i++){
		
		if(a[i]!=0){
			c3=0;
	}
	}
	if(c3){printf("YES");}
	else{printf("NO");}
		
	
		return 0;
}