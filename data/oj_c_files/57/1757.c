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
	char str[20],t[20];
	int len,i,n,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%s",str);
		len = strlen(str);
		if(str[len-1]=='r'){
			for(i=0;i<len-2;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		if(str[len-1]=='g'){
			for(i=0;i<len-3;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		if(str[len-1]=='y'){
			for(i=0;i<len-2;i++){
				t[i] = str[i];
			}
			t[i] = '\0';
		}
		printf("%s\n",t);
	}
	
}