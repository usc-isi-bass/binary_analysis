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
	char words[100][100];
	int i,n,k,j=0,g=0;
	gets(s);
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
	int L[100],max=strlen(words[0]);
	for(i=1;i<n;i++)
	{
	    L[i]=strlen(words[i]);
		if(L[i]>max)
		{
			max=L[i];
		    j=i;
		}
	}
	int M[100],min=strlen(words[0]);
	for(i=1;i<n;i++)
	{
	    M[i]=strlen(words[i]);
		if(M[i]<min)
		{
			min=M[i];
			g=i;
		}
	}
    printf("%s\n%s",words[j],words[g]);
	return 0;
}










