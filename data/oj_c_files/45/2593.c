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
	char s[100]={0},w[100]={0};
	int lens,lenw,i,j,k,t=0;
	scanf("%s %s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
    for(i=0;i<lenw;i++)
	{
		if (w[i]==s[0]) 
		{
			for(j=i,k=0;j<=i+lens,k<=lens-1;j++,k++)
            {if (w[j]==s[k]) t++; }
		}
		if (t==lens) {printf("%d",i);break;}
	}
	return 0;
}