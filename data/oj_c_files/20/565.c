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
    char s1[100],s2[100],k=0,j=0,len,i,h;
    int max=-2000;
    while (scanf("%s%s",s1,s2)!=EOF)
	{ 
            len=strlen(s1);
            max=-2000;
            for(h=0;h<len;h++)
                if(s1[h]>max)
                {
                    max=s1[h];
                    i=h;
                }
            for(h=0;h<=i;h++)
            printf("%c",s1[h]);
            printf("%s",s2);
            for(h=i+1;h<len;h++)
            printf("%c",s1[h]);
            printf("\n");
	}
}
