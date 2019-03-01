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
	int content[300];
	int i, n, m=0, j;
	int temp;
	short flag;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &temp);
		flag = 0;
		for (j=0; j<m; j++){
			if (content[j]==temp)
				flag = 1;
		}
		if (!flag)
			content[m++] = temp;
	}
	
	for(i=0; i<m; i++){
		printf("%d", content[i]);
		if (i<m-1)
			printf(",");
	}
	
	return 0;
}

