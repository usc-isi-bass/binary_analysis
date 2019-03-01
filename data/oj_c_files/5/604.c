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

int main (){
	int i,x,y;
	double w,sum=0,p;
	char a[1000],b[1000];
	scanf("%lf",&w);
	scanf("%s",a);
	scanf("%s",b);
x=strlen(a);
y=strlen(b);
	if(x==y){
		for(i=0;i<x;i++){
			if(a[i]==b[i]){
				sum++;
			} 
			else if((a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G')||(b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G')){
			printf("error\n");
			return 0;
		}
		}
		
	}
	else if(x!=y){
		printf("error\n");
		return 0;
	}
	while (x==y){
		p=sum/x;
		if(p>=w){
			printf("yes\n");
			break;
		}
		else printf("no\n");
		break;
	}
	
	return 0;
}

