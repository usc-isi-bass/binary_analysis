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
int i,j,x,y,u=0,t=0;
double n;
char a[505],b[505];
scanf("%lf",&n);
scanf("%s",a);
scanf("%s",b);;
x=strlen(a);
y=strlen(b);
if(x!=y) t=0;
else{
for(i=0;i<x;i++){
	if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&(b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C') ){
		t+=1;
		if(a[i]==b[i]) 
		u+=1;
		
	}
	else if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
	t=0;
}
}
if(t==0)  printf("error");
else if(u*1.0/x>=n) printf("yes");
else if(u*1.0/x<n) printf("no");	
return 0;
}
		