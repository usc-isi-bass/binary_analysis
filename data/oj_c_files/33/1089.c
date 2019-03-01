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
int n,i,l,j;
char s[300];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",s);
l=strlen(s);
for(j=0;s[j]!='\0';j++){
	if(j==l-1){
if(s[j]=='A') printf("T\n");
if(s[j]=='T') printf("A\n");
if(s[j]=='C') printf("G\n");
if(s[j]=='G') printf("C\n");
	}else{
if(s[j]=='A') printf("T");
if(s[j]=='T') printf("A");
if(s[j]=='C') printf("G");
if(s[j]=='G') printf("C");
	}
}

}
	return 0;
}

