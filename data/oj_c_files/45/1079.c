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
	char s1[100],s2[100];
	int i,j,f;
	scanf("%s%s",s1,s2);
	for (i=0;i<strlen(s2);i++){
		for (j=0;j<strlen(s1);j++)
			if (s1[j]!=s2[i+j])	break;
		if (j==strlen(s1)) break;
	}
	printf("%d\n",i);
	return 0;
}
