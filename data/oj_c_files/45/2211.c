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
	char s[1000];
	gets(s);
	char words[100][100];
	int count0,count1,j;

	int n, k, i;
	n = 0; k = 0;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;

	count1=strlen(words[1]);
	count0=strlen(words[0]);

	for(i=0;i<count1;i++)
	{
		if(words[0][0]==words[1][i])
		{
			for(j=0;j<count0;j++)
			{
				if(words[0][j]!=words[1][i+j])
				{
					break;
				}
				if(j==count0-1)
				{
					printf("%d",i);
					break;
				}
			}
			break;
		}
	}

	return 0;
}