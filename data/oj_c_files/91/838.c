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
int i,j,s,t,n,max=0,num=0;

char *p,a;
p=(char*)malloc(101*sizeof(char));

gets(p);

for(i=0;*(p+i)!='\0';i++)
{   a=*(p+i)+*(p+i+1);
if(*(p+i+1)=='\0') {a=*(p+i)+*(p+0);}
printf("%c",a);
}

}