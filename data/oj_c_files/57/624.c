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
	int n,a,i,j;
	char dc[52];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",dc);
		a=strlen(dc);
		if(dc[a-1]=='r'||dc[a-1]=='y'){
			for(j=0;j<a-2;j++){
				if(j<a-3)
					printf("%c",dc[j]);
				else
					printf("%c\n",dc[j]);				
			}
		}
		else if(dc[a-1]=='g'){
			for(j=0;j<a-3;j++){
				if(j<a-4)
					printf("%c",dc[j]);
				else
					printf("%c\n",dc[j]);
			}
		}					
	}
	return 0;
}
