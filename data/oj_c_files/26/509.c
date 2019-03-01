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
	char s[101];
	int leng,i,j,sum=0;
	cin.getline(s,101);
	leng=strlen(s);
	for(i=0;i<leng-sum;i++)
		if(s[i]==' '&&s[i+1]==' ')
			{
				sum++;
				for(j=i;j<leng-sum;j++)
					s[j]=s[j+1];
				i=i-1;
			}
	for(i=0;i<leng-sum;i++)
		cout<<s[i];
	return 0;
}
