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

int main(int argc, char* argv[])
{   
	char s[31];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]<58&&s[i]>47)printf("%c",s[i]);
		if(s[i]<58&&s[i]>47&&(s[i+1]>=58||s[i+1]<=47))printf("\n");
	}
	return 0;
}
