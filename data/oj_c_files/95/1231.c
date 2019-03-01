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
char text1[81],text2[81];int i,j,n;
gets(text1);n=strlen(text1);printf("\n");gets(text2);
for(i=0;i<n;i++)
{if((text1[i]>='a')&&(text1[i]<='z'))   text1[i]=text1[i]-'a'+'A';
if((text2[i]>='a')&&(text2[i]<='z'))   text2[i]=text2[i]-'a'+'A';}
if(strcmp(text1,text2)==0)    printf("=");
else if(strcmp(text1,text2)>0)    printf(">");
else if(strcmp(text1,text2)<0)    printf("<");
}