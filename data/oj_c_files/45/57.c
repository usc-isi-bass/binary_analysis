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
	char m[60],n[60];
	int k,t,s,a;
	scanf("%s %s",&m,&n);		
	for(t=0;n[t]!='\0';t++){
	    if(m[0]==n[t]){
			a=t;
		}
		for(k=1,s=t;m[k]!='\0';k++,s++){
		    if(m[k]!=n[s]){
			    k=0;
			    break;
			}
		}
		if(k!=0) break;
	}
	printf("%d",a);
	return 0;
}