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
	char str[300],s[100],r[100];
	int i,j,k,m;
	scanf("%s%s%s",str,s,r);
	m=strlen(s);
	for(i=0;str[i]!='\0';i++){
		k=0;
		for(j=0;j<m;j++){
			if(str[i+j]==s[j])
				k++;
		}
		if(k==m){
			for(j=0;j<m;j++){
				str[i+j]=r[j];
			}
			break;
		}
	}
	printf("%s",str);
	return 0;
}