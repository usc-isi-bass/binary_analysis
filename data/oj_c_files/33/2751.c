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
	int n,i,a[1000],j;
	char s[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		a[i]=strlen(s[i]);
		for(j=0;j<a[i];j++)
		{
			if(s[i][j]=='A'){
				s[i][j]='T';
			}else{
				if(s[i][j]=='T'){
					s[i][j]='A';
				}else{
					if(s[i][j]=='C'){
						s[i][j]='G';
					}else{
						s[i][j]='C';
					}
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
	return 0;
}
