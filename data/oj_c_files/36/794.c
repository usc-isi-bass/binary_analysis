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


void main(){
int t,n,i,l,j,m,k,x;
char s[800],a[500],b[500];
gets(s);
for(i=0;s[i]!=' ';i++){
a[i]=s[i];
}
a[i]='\0';
i++;
for(j=0;s[j+i]!='\0';j++){
b[j]=s[j+i];
}
b[j]='\0';
t=0;
if(i-1==j){
for(k=0;a[k]!='\0';k++){
	for(l=0;b[l]!='\0';l++){
	x=0;
	  if(a[k]==b[l]){
	  b[l]=' ';
	  x=1;
	  break;
	  }
	}
	if(x==0){
		printf("NO");
		break;
	}
if(a[k+1]=='\0')printf("YES");
  }
}else{
	printf("NO");
}
}