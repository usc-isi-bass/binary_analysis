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
    char string[300],max[20]="",min[20]="aaaaaaaaaaaaaaa";
    int length,len,sho;
    do
    {
    	scanf("%s",string);
    	length=strlen(string);
    	len=strlen(max);sho=strlen(min);
    	if(length>len) strcpy(max,string);
    	if(length<sho) strcpy(min,string);
    }while (getchar()!='\n');
    puts(max);
    puts(min);
}