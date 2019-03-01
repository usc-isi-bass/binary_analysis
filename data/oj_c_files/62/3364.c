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
	int i,j,k,n,t=0;
	char s[100];
	gets(s);
	k=strlen(s);
	for(i=0;i<k;i++) {
		if(s[i]==' ') {
			if(s[i+1]==' ') {
				t=t+1;
				for(n=i;n>=t-1;n--) {
					s[n+1]=s[n];
				}
				
			}
			}
		
	}
		for(j=t;j<k;j++) 
			printf("%c",s[j]);
		return 0;
}
	
		
