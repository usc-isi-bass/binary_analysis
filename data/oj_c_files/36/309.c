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
 int i,j,k=0;
 char str1[100],str2[100];
 scanf("%s %s",str1,str2);
 if(strlen(str1)==strlen(str2))
 {
	int m=strlen(str1);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			if (str2[j]=='0') continue;
			else if(str1[i]==str2[j]) {str2[j]='0';k++;break;}
		}
    if(k==m) printf("YES"); else printf("NO");
 }
else if(strlen(str1)!=strlen(str2)) printf("NO");
}