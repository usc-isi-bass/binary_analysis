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

void main()
{
	char s[100],w[100];
	int i,j,p=1,len;
	scanf("%s%s",s,w);
	len=strlen(s);
	for(i=0;w[i]!='\0';i++)
	{
		for(j=0;j<len;j++)
			if(w[i+j]!=s[j]) {p=0;break;}
	    if(p==1) {printf("%d",i);break;};
		p=1;
	}
}
