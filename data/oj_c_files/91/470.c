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
    int i,j,stat; 
    char s[101],w[101],*ps,*pw;
    gets(s);
    ps=s;
    pw=w;
    for(i=0;i<=strlen(s)-2;i++)
    {
        *(pw+i)=*(ps+i)+*(ps+i+1); 
    }
    *(pw+strlen(s)-1)=*(ps)+*(ps+strlen(s)-1);
    *(pw+strlen(s))='\0';
    puts(w); 
    return 0;
} 
     
