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
    char c[210],qinpeng[210];
    int i,j;
    gets(c);
    for(i=0;i<(strlen(c)-1);i++)
    {
                            qinpeng[i]=c[i]+c[i+1];
    }
    qinpeng[strlen(c)-1]=c[0]+c[strlen(c)-1];
    qinpeng[strlen(c)]='\0';
    printf("%s\n",qinpeng);
    return 0;
}