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
	char s[1000],word[100][20];
	int i,j,k,len;
	gets(s);
	len=strlen(s);
	j=0;
	k=0;
	for(i=0;i<len;i++){
		if(s[i]!=' '){
			word[j][k]=s[i];
			k++;
		}
		else if((s[i]==' ')&&(s[i-1]!=' ')){
			word[j][k]='\0';
			j++;
			k=0;
		}
		else{
			continue;
		}
	}
	word[j][k]='\0';
	for(i=0;i<j;i++){
		printf("%s ",word[i]);
	}
	printf("%s",word[i]);
	return 0;
}

