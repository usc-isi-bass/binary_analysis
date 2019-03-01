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
int i,n=0,m=0,p=0,q=0;
char s[300],a='Z',k,j;
scanf("%s" ,&s);
for(i=0;s[i]!='\0';i++){
	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
	q++;
	}

}
if(q==0){
printf("No");
}
for(k='A';k<'Z';k++){
	n=0;
	
	for(i=0;s[i]!='\0';i++){
		if(s[i]==k){
		n++;
		}

	}
	if(n!=0){
	printf("%c=%d\n" ,k,n);
	}
}
for(i=0;s[i]!='\0';i++){
	if(s[i]==a){
	m++;
	}
}
if(m!=0){
printf("%c=%d\n" ,a,m);
}
for(j='a';j<='z';j++){
	p=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==j){
		p++;
		}
	}
	if(p!=0){
	printf("%c=%d\n" ,j,p);
	}
}

return 0;
}