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

int main()
{ char a[30000],d[300][100];
	int l,i,n=0,k=0,p;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]!=' '){
			d[n][k]=a[i];
			k++;}
		else { if(a[i-1]==' ') continue;
			else{
			d[n][k]='\0';
			n++;
			k=0;}
		}
		}
		d[n][k]='\0';
		p=strlen(d[0]);
		printf("%d",p);
	for(i=1;i<=n;i++){
		p=strlen(d[i]);
		
		printf(",%d",p);}
	
return 0;	
	
	
	
    
}
