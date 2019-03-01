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
	char s[257]={'0'},sub[257]={'0'},rep[257]={'0'},temp[257]={'0'};
	scanf("%s%s%s",s,sub,rep);
	int i,j,k,len1,len2,time;
	len1=strlen(s);
	len2=strlen(sub);
	for(i=0;i<len1;i++){
		k=i;
		for(j=0;j<len2;j++,i++){
			temp[j]=s[i];
		}
		i=k;
		if(strcmp(temp,sub)==0){
			time=i;
			break;
		}
	}
	if(strcmp(temp,sub)==0){
	for(i=time,j=0;i<time+len2;i++,j++){
s[i]=rep[j];
	}
}
	printf("%s",s);
	return 0;
}
