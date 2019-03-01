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

int main(){
	int n,suffixlen;
	char word[40],*p;
	scanf("%d", &n);
	for(int i =0; i<n; i++){
		scanf("%s", word);
		for(p = word;*p;p++);
		switch(*(p-1))
		{
			case'r':suffixlen = 2;break;
			case'y':suffixlen = 2;break;
			case'g':suffixlen = 3;break;
		}
		*(p-suffixlen) ='\0';
		printf("%s\n",word);
	}
		return 0;
}