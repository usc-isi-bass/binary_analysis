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
	double r,x;
	int l,l1,l2,i,j,t=0,flag=0;
	char a[100],b[100];
	scanf("%lf",&r);
	scanf("%s",a);
    scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
    for(i=0;i<l1;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'){
			continue;
		}
		else{
			flag=1;
		}
	}
    for(j=0;j<l2;j++){
		if(b[j]=='A'||b[j]=='T'||b[j]=='C'||b[j]=='G'){
			continue;
		}
		else{
			flag=1;
		}
	}
	if(l1!=l2||flag==1){
		printf("error");
		return 0;
	}
	else{
        l=l1;
		for(i=0;i<l;i++){
			if(a[i]==b[i]){
				t=t+1;
			}
		}
		x=(double)t/l;
		if(x>r){
			printf("yes");
		}
		else{
			printf("no");
		}
	}
	return 0;
}
