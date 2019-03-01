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
{	char s[50],w[50];int i,j,S,W;
	scanf("%s %s",s,w);
	S=strlen(s);
	for(i=0;w[i]!='\0';i++)
	{	W=1;
		if(w[i]==s[0]) for(j=1;s[j]!='\0';j++)	if(w[i+j]!=s[j]) break;
												else W++;
		if(W==S) {printf("%d",i);break;}
}}