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

char str1[80], str2[80];
int main()
{
	int i, len1, len2;
    cin.getline(str1,80,'\n');
	cin.getline(str2,80,'\n');
	len1 =strlen(str1);
	len2 =strlen(str2);
    for(i=0; i<len1; i++)
		if(str1[i]>='A' && str1[i]<='Z')
			 str1[i]+=32;
    for(i=0; i<len2; i++)
		if(str2[i]>='A' && str2[i]<='Z')
			str2[i]+=32;
	if(strcmp(str1,str2)>0)
		cout << '>';
	else if(strcmp(str1,str2)<0)
		cout << '<';
	else
		cout <<'=';
	return 0;
}
