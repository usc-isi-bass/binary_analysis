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
	char s[81],b[81];
	int i;
	gets(s);
	gets(b);
	for(i=0;i<=80;i++)
	if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
    
	 for(i=0;i<=80;i++)
	if(b[i]>='A'&&b[i]<='Z') b[i]=b[i]-'A'+'a';
	
    if(strcmp(s,b)>0) printf(">");
    if(strcmp(s,b)<0) printf("<"); 
    if(strcmp(s,b)==0) printf("=");
return 0;
}