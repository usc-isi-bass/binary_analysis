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

//#include<stdlib.h>
//#include<math.h>
int main()
{
	char s1[257],s2[257],s3[257];
	char* p;
	gets(s1);
	gets(s2);
	gets(s3);
	p=strstr(s1,s2);
	if(p) {
		int i=p-s1;
		s1[i]='\0';
		printf("%s",s1);
		printf(s3);
		printf("%s\n",p+strlen(s2));
	}
	else {
		puts(s1);
	}
	
	return 0;
}
