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
{int n,i,j;char s[100];scanf("%d",&n);
for(i=0;i<n;i++){scanf("%s",s);if(s[strlen(s)-1]=='g')for(j=0;j<strlen(s)-3;j++)printf("%c",s[j]);
else for(j=0;j<strlen(s)-2;j++)printf("%c",s[j]);printf("\n");}}
