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
    int n,len=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char s[256];
		scanf("%s",s);
        len=strlen(s);
		for(int j=0;j<len;j++)
		{
			if(s[j]=='A')  printf("T");
            if(s[j]=='T')  printf("A");
			if(s[j]=='C')  printf("G");
			if(s[j]=='G')  printf("C");
		}
		printf("\n");
	}
	return 0;
}