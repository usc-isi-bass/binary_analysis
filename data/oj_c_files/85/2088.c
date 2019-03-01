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
	int n,i,c,j;
    char a[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		c=0;
		for(j=0;j<strlen(a);j++){
			if(j==0){
				if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||(a[0]=='_')&&(a[0]<'0'||a[0]>'9')){
					c++;}
			}
			else{
				if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]=='_')||(a[j]>='0'&&a[j]<='9')){
						 c++;}
			}
		}
		if(c==strlen (a)){
			printf("yes\n");
		}
		else{
			printf("no\n");}
	}
	return 0;
}