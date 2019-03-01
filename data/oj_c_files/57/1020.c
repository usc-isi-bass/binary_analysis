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



int main(int argc, char *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    char a[40];
    for(i=1;i<=n;i++)
    {
                     scanf("%s",a);
                     j=strlen(a);
                     if(a[j-2]=='e'&&a[j-1]=='r')
                     a[j-2]='\0';
                     else if(a[j-2]=='l'&&a[j-1]=='y')
                     a[j-2]='\0';
                     else if(a[j-3]=='i'&&a[j-2]=='n'&&a[j-1]=='g')
                     a[j-3]='\0';
                     printf("%s\n",a);
    }
    
    
    
    return EXIT_SUCCESS;
}
