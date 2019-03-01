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
	int n,i;
	scanf ("%d",&n);
	for(i=0;i<n;i++){
	int c=0;
	char str[15]={0},string[15]={0};
		scanf("%s",&str);
		c=strlen(str);
		if(str[c-1]=='g'){
		strncpy(string,str,c-3);
		}
		else{
			strncpy(string ,str,c-2);
		}
		printf("%s\n",string);
		}

		return 0;
}

