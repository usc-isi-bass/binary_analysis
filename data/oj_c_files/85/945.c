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
int n,t;
char a[50];

scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%s",a);
	t=1;
	if((a[0]<'A'||a[0]>'Z')&&(a[0]<'a'||a[0]>'z')&&a[0]!='_'){
		t=0;
	}
	for(int j=1;j<strlen(a);j++){
		if((a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z')&&a[j]!='_'&&(a[j]<'0'||a[j]>'9')){
			t=0;
			break;
		}
	}
	if(t==0){
		printf("no\n");
	}
	else if(t==1){
		printf("yes\n");
	}
}






return 0;
}