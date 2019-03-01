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
{
	char a[NUM],b[200][50]={'\0'};
	char *max,*min;
	int m,n,i,t,j;
	gets(a);
	j=strlen(a);
	t=0;
	n=0;
	for(m=0;m<j;m++){
		if((a[m]!=' '&&a[m]!='\0')&&a[m]!=','){
		    b[n][t]=a[m];
		    t++;
		}
		else{
			n++;
			t=0;
		}
	}
	max=b[0];
	min=b[0];
	for(i=1;i<n+1;i++){
		if(strlen(max)<strlen(b[i])){
			max=b[i];
		}
		if(strlen(min)>strlen(b[i])&&(strlen(b[i])!=0)){
			min=b[i];
		}
	}
	puts(max);
	puts(min);
	return 0;
}
