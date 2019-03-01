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
    int n;
    char word[40],max[40],min[40];
    int j,i;
    scanf("%d",&n);
    scanf("%s",max);
    strcpy(min,max);
    for(i=1;i<n;i++)
    {
        scanf("%s",word);
        if(strlen(word)>strlen(max))strcpy(max,word);
        if(strlen(word)<strlen(min))strcpy(min,word);
    }
    printf("%s\n",max);
    printf("%s",min);

}