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
	char a[100001];
	int i,j,k,t,n;
	int b,c;

	gets(a); 
	t = atoi(a);
    
	for(i=0;i<t;i++){
		gets(a);
		n=strlen(a);
		c=0;
		for(j=0;j<n;j++){
			b=0;
			for(k=0;k<n;k++){
				if((j!=k)&&(a[j]==a[k])){
					b++;
				}
			}
			if(b==0){
				printf("%c\n",a[j]);
				c=1;
				break;
			}
		}
		if(c==0){
			printf("no\n");
		}
	}

	return 0;
}