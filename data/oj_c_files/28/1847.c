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
int i=0;
char word[300][100];
scanf("%s",word[i]);
printf("%d",strlen(word[i]));
for(i=1;;i++)
{
    if(scanf("%s",word[i])==EOF)break;
    printf(",%d",strlen(word[i]));
}
}
