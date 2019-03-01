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
	char zfc[25];
	int n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc);
		a=0;
		for(j=0;zfc[j]!='\0';j++){
			if(j==0&&
				(zfc[j]=='_'||
				(zfc[j]>='a'&&zfc[j]<='z')||
				(zfc[j]>='A'&&zfc[j]<='Z'))){
				a=1;}
			else if(j>0&&
				(zfc[j]=='_'||
				(zfc[j]>='a'&&zfc[j]<='z')||
				(zfc[j]>='A'&&zfc[j]<='Z')||
				(zfc[j]>='0'&&zfc[j]<='9'))){
				a=1;}
			else{a=0;}
			if(a==0){break;}
		}
		if(a==0){printf("no\n");}
		else{printf("yes\n");}
	}
	return 0;
}
