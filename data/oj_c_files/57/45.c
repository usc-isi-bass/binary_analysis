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
	char input[100];
	int n;
	int len;
	scanf("%d", &n);
//	scanf("\n");
	for(; n>0; n--){
		scanf("%s", input);
		len = strlen(input);
		if ((input[len-2]=='e')&&(input[len-1]=='r'))
			input[len-2] = 0;
		if ((input[len-2]=='l')&&(input[len-1]=='y'))
			input[len-2] = 0;
		if ((input[len-3]=='i')&&(input[len-2]=='n')&&(input[len-1]=='g'))
			input[len-3] = 0;
		puts(input);
	}

	return 0;
}