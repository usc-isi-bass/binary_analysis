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
	int i, j, LEN, NUM1, NUM2, tmp=0;
	char a[20], b[20];
	scanf("%s%s", &a, &b);
	if(strlen(a)!=strlen(b))
		printf("NO\n");
	else
	{
		LEN=strlen(a);
		for(i=0; i<LEN; i++)
		{
			NUM1=0;
			NUM2=0;
			for(j=0; j<LEN; j++)
				if(a[i]==a[j])
					NUM1++;
			for(j=0; j<LEN; j++)
				if(a[i]==b[j])
					NUM2++;
			if(NUM1!=NUM2)
			{
				printf("NO\n");
				break;
			}
			tmp++;
		}
		if(tmp==LEN)
			printf("YES\n");
	}
}