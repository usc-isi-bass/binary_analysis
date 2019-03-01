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
	double y,a;
	char  q[501],h[501];
	int n1,n2,i,c=0,tag=0;
	scanf("%lf",&y);
	scanf("%s",q);
	scanf("%s",h);
	n1=strlen(q);
	n2=strlen(h);
	if(n1!=n2){
		printf("error");
	}
	else{
		
		for(i=0;i<n1;i++){
		     if((q[i]!='A')&&(q[i]!='T')&&(q[i]!='C')&&(q[i]!='G')){
			     printf("error");
				 tag=1;
			     break;
			 }
		}
		if(tag==0){
	    for(i=0;i<n2;i++){
		     if((h[i]!='A')&&(h[i]!='T')&&(h[i]!='C')&&(h[i]!='G')){
		      	printf("error");
				tag=1;
			     break;
			 }
		}
		}
		for(i=0;i<n1;i++){
			if(q[i]==h[i]){
				c++;
			}
		}
		a=1.0*c/n1;
		if(tag==0){
			if(a>y){
			    printf("yes");
			}else{
			    printf("no");
			}
		}
	}
	return 0;
}
