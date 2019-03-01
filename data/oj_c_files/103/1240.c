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
	int i=0,j=0,k=0,l,f[1002]={0},g;
	char s[1002],a[1002];
	gets(s);
	l=strlen(s);
	if(l==1){
		if(s[0]>=65&&s[0]<=90)
			printf("(%c,%d)",s[0],1);
		else
			printf("(%c,%d)",s[0]-32,1);
	}
	else{
		for(i=1;i<=l;i++){
		k=i-1;
		f[k]=1;
		for(;i<l;i++){
			if(s[i]==s[k]||abs(s[i]-s[k])==32)
				f[k]++;
			else
				break;
		}
		if(s[k]>=65&&s[k]<=90)
			printf("(%c,%d)",s[k],f[k]);
		else
			printf("(%c,%d)",s[k]-32,f[k]);
	}
	}
	return 0;
}

