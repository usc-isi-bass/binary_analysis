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
int j,q,k,x,m,l;
char a[30000];
int b[10000];
gets(a);
j=0;
q=0;
l=strlen(a);
for (int i=0;i<l;i++){
	if(a[i]==' '){
			b[j]=i-q;
			k=0;
			for (int m=i+1;m<l;m++){
				if(a[m]==' '){k++;}
				else{break;}}			
	
	i=i+k;
	q=i+1;
    j++;   
	}
}
for (int i=0;i<j;i++){printf("%d%c",b[i],',');}
printf("%d",l-q);
return 0;
}