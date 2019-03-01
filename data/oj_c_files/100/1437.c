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
	int shu[26],q=0;
	char a[300];
	scanf("%s",&a);
    int as=strlen(a),i;
	for(i=0;i<26;i++) shu[i]=0;
    for(i=0;i<as;i++)
	{
		if((int)a[i]-97>=0&&(int)a[i]-97<26) shu[(int)a[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(shu[i]!=0) printf("%c=%d\n",(char)(i+97),shu[i]);
		else q++;
	}
	if(q==26) printf("No\n");
	return 0;
}
