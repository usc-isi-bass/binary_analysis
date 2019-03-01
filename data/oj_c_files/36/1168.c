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


char a[100]={0};
char b[100]={0};
int main(){
	int i,j;
	char e;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++){
		if(a[i]!=b[i]){
			for(j=i+1;j<strlen(a);j++){
				if(a[j]==b[i]){
					e=a[j];
					a[j]=a[i];
					a[i]=e;
				}
			}
		}
		if(a[i]!=b[i]){
			printf("NO");
			break;
		}
	}
	if(!strcmp(a,b)) printf("YES");
	else{
		if(i==strlen(a)) printf("NO"); 
	}
	return 0;	
}
