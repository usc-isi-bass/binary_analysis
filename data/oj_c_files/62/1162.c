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
	char s[100],a[100]={0};
	int i,j,k=0,n,l,h=0;
	gets(s);
	l=strlen(s);
	for(j=0;j<l+1;j++){
		
		if(s[j]==' '){
			k++;
		}
		
	    if(s[j]!=' '&&k==0){
			a[h]=s[j];
			h++;
		}
		if(k>=1&&s[j]!=' '){
			a[h]=' ';
			k=0;
			a[h+1]=s[j];
			h+=2;
		
		
		}if(s[j]=='\0'){
			break;
		}
	}

   puts(a);
	return 0;
}