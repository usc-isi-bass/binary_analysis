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


int main() {
	char word[100];
	int n,len;
	scanf("%d",&n);
	while(n--){
		scanf("%s",word);
		len=strlen(word);
		if(word[len-1]=='r' || word[len-1]=='y'){
				word[len-2]='\0';
		} else if(word[len-1]=='g'){
			word[len-3]='\0';
		}
	printf("%s\n",word);
	}
	return 0;
}

