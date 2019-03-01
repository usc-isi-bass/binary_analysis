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
	char s[max+1],q[max+1];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		for(j=0;s[j];j++){
			
			if(s[j]=='A'){
				q[j]='T';
			}
			if(s[j]=='T'){
				q[j]='A';
			}
			if(s[j]=='G'){
				q[j]='C';
			}
			if(s[j]=='C'){

				q[j]='G';
			}
			
		}
		q[j]='\0';
		printf("%s\n",q);
		
	}


	return 0;
}

