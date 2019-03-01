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


void main()
{
	int i,j,len,fail=0;
	char s[50],w[20];
	scanf("%s %s",s,w);
	len=strlen(s);
	i=j=0;
	while(1){
		if(w[i]!=s[0]){
			i++;
			continue;
		}
		for(j=0;j<len;j++){
			if(w[i+j]!=s[j]){
				fail=1;
				break;
			}
		}
		if(fail==1){
			i++;
			fail=0;
			continue;
		}
		else break;
	}
	printf("%d\n",i);
}