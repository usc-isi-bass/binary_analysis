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
char a[100];
int i,n,m=1;
int length;
char *p;
scanf("%d",&n);

for(i=0;i<n+1;i++){
gets(a);
    p=a;
	if(!( (*p=='_')|| (*p>64&&*p<91) || (*p>96&&*p<123) ) ){
		m=0;
	}
    length=strlen(a);
	for(p=a;p<a+length;p++){
		if(! ((*p=='_') || (*p>64&&*p<91) || (*p>96&&*p<123) || (*p>47&&*p<58) )){
					m=0;
					break;
		}
        
	}
	if(i>0){
	printf("%d\n",m);
	}
	m=1;
}
return 0;
}

