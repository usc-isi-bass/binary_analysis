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
	char **p,*j,*k;
	int t,i,flag=0;

	scanf("%d",&t);
	p = (char **)malloc(t*sizeof(char*));
	for (i=0;i<=t;i++){
        *(p+i) = (char *)malloc(10000*sizeof(char));
		gets(*(p+i));
	}

	for (i=1;i<=t;i++){
		for(j=*(p+i);*j!='\0';j++){
            for (k=j+1;*k!='\0';k++){
				if (*k==*j){
					*k='0';
					flag=1;
				}
			}
		    if (flag==1) *j='0';
        flag = 0;
		}
	}

	for (i=1;i<=t;i++){
		for (j=*(p+i);*j!='\0';j++){
			if (*j!='0'){
				printf("%c\n",*j);
				break;
			}
		}
		if (*j=='\0') printf("no\n");
	}
}
