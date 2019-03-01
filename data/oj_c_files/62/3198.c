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
    int j,z=1,n,l;
    char w[300];
    gets(w);
for(j=0;j<strlen(w);j++)
if(w[j]!=' '||w[j+1]!=' ')
printf("%c",w[j]);
    
        return 0;
}

