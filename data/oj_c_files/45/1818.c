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
    int j;
    char s[2][51];
    scanf("%s",s[0]);
    scanf("%s",s[1]);
    for(j=0;s[1][j+1]!='\0';j++)
	{
            if((s[0][0]==s[1][j])&&(s[0][1]==s[1][j+1]))
			{
                 printf("%d",j);
                 return 0;
			}
	}
    return 0;
}