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
int n,len;
scanf("%d",&n);
char a[100][20],b[20];
int i,k,flag;
for(i=0;i<n;i++){
	scanf("%s",a[i]);
}
for(i=0;i<n;i++){
	strcpy(b,a[i]);
	flag=1;

	len=strlen(b);
    if((b[0]>='A'&&b[0]<='Z')||(b[0]>='a'&&b[0]<='z')||(b[0]=='_')){
		for(k=1;k<len;k++){
			if((b[k]>='A'&&b[k]<='Z')||(b[k]>='a'&&b[k]<='z')||(b[k]=='_')||(b[k]>='0'&&b[k]<='9')){
              flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(flag==0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}else{
		printf("no\n");
	}
}
	return 0;
}