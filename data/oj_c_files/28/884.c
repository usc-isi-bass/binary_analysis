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
	char s[10000],a[300][30];
	int b[300];
	gets(s);
	int len=strlen(s);
	int i,k=0,j=0,m,n=0;
	for(i=0;i<len+1;i++){
		
		if(s[i]!=' '&&s[i]!='\0'){
		a[k][j]=s[i];
		j++;
	}
		if(s[i]==' '||s[i]=='\0'){
			a[k][j]='\0';
			k++;
			j=0;
		}
	}
	

	for(m=0;m<k-1;m++){
		b[n]=strlen(a[m]);
		if(b[n]!=0){
		printf("%d,",b[n]);
		}
		n++;
	}
	b[k-1]=strlen(a[k-1]);
		printf("%d\n",b[k-1]);
		return 0;
}
