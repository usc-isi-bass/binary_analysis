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
	int i,k=0,la,lb;
	double n,s=0;
	char a[500],b[500];
	scanf("%lf",&n);
	scanf("%s%s",a,b);
	la=strlen(a),lb=strlen(b);
	if(la!=lb){
			k=2;
	}
	else{
		for(i=0;i<la;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='G'&&b[i]!='T'&&b[i]!='C')){
				k=2;
				break;
			}
		}
		if(k!=2){
			for(i=0;i<la;i++){
				if(a[i]==b[i]){
					s++;
				}
			}
			s=s/la;
			if(s<=n){
				k=1;
			}
			else k=0;
		}
	}
	if(k==1)
		printf("no");
	if(k==0) printf("yes");
	if(k==2) printf("error");
	return 0;
}
	


	
