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
        char str[50][30];
        int n,i,len;
        scanf("%d",&n);
        for(i=0;i<n;i++){
               scanf("%s",str[i]);
        }
        for(i=0;i<n;i++){
               len=strlen(str[i]);
               if(str[i][len-2]=='e') str[i][len-2]='\0';
               else if(str[i][len-2]=='l') str[i][len-2]='\0';
               else if(str[i][len-2]=='n') str[i][len-3]='\0';
               printf("%s\n",str[i]);
        }
        return 0;
}
