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
int i,n,p=0,q=0,r=0;
char s[302],x;
gets(s);
n=strlen(s);

for(i=0;i<n;i++){
	if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))){
	p++;
	}
	
}
if(p==0){
printf("No");
}else{
	for(x='A';x<='Z';x++){
		q=0;
		for(i=0;i<n;i++){
			if(x==s[i]){
			q++;
			}
		}
		if(q!=0){
		printf("%c=%d\n" ,x,q);
		}
	}
    
    for(x='a';x<='z';x++){
		r=0;
		for(i=0;i<n;i++){
			if(x==s[i]){
			r++;
			}
		}
		if(r!=0){
		printf("%c=%d\n" ,x,r);
		}
	}
   

}

return 0;
}