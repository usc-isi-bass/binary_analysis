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
	char s[100];
	gets(s);
	int a,i,j;
	int b;
	b=a=strlen(s);
	for(i=1;i<a;){
		if(s[i]==' '&&s[i-1]==' '){
			for(j=i;j<b-1;j++){
				s[j]=s[j+1];
			}
			b--;
		}
		else{i++;
		}
	}
	s[b]='\0';
	puts(s);
	return 0;
}