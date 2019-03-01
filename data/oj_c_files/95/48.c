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


int main(int argc, char* argv[])
{char a[81],b[81];
int i,j,n,m,p,r,x;
gets(a);
gets(b);
n=strlen(a);
p=strlen(b);
for(i=0;i<n;i++){
	m=(int)a[i];
	if(m>=97&&m<=122) {m=m-32;a[i]=(char)m;}
}
for(j=0;j<p;j++){
	r=(int)b[j];
	if(r>=97&&r<=122) {r=r-32;b[j]=(char)r;}
}
x=strcmp(a,b);
if(x>0) printf(">");
else if(x==0) printf("=");
else if(x<0) printf("<");
	return 0;
}

