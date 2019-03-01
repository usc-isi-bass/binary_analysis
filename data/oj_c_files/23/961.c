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
char *string;
char (*str)[20];
char c;
int i,l,j=0,k=0;

string=(char *)malloc(1000*sizeof(char));
str=(char (*)[20])calloc(1000,20*sizeof(int));
gets(string);
for(i=0;(c=*(string+i))!='\0';i++)
{if(c!=' ')
{*(*(str+k)+j)=c;j++;}
else
{k++;j=0;}
}
for(l=k;l>0;l--)
printf("%s ",*(str+l));
printf("%s",*(str));



}