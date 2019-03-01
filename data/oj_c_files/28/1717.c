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
	char s[N];
	int i,j,m;
	gets(s);
	for(i=0;i<N;i++){
		if(s[i]=='\0')
			break;
	}
	for(m=0,j=0;j<=i;j++){
		if(s[j]!='\0'&&s[j]!=' '){
			m++;
		}
	    else if(s[j]==' '){
			if(m!=0){
		        printf("%d,",m);
			    m=0;
			}
		}
		else if(s[j]=='\0'){
			printf("%d",m);
			break;
		}
	}
	return 0;
}

