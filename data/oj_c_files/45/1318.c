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
	char a1[50],a2[50];
	int i,j,m=0;
	scanf("%s %s",a1,a2);
	for(i=0;a1[i]!='\0';i++){
		for(j=0;a2[j]!='\0';j++){
			if(a1[i]==a2[j]){
				printf("%d",j);
				m++;
			}
			if(m==1){
				break;
			}
		}
	}
	return 0;
}

