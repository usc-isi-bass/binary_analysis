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
    char s[100];
    int i , len , n ;
    cin>>n;
    for( i=1 ; i<=n ; i++ )
    {
       scanf("%s",s);
       len=strlen(s);
       if( s[len-1]=='r' && s[len-2]=='e' ){ s[len-2]='\0'; printf("%s\n",s); continue; }
       if( s[len-1]=='y' && s[len-2]=='l' ){ s[len-2]='\0'; printf("%s\n",s); continue; }      
       if( s[len-1]=='g' && s[len-2]=='n' && s[len-3]=='i' ){ s[len-3]='\0'; printf("%s\n",s); continue; } 
       printf("%s\n",s);
    }
}