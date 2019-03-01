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
    scanf("%d",&n); 
    char num[256];
    for(int i=0;i<=n;i++)
    {
 
        gets(num);
        for(int j=0;j<=255;j++)
        {
            if(num[j]=='A')
            num[j]='T';
            else if(num[j]=='C')
            num[j]='G';
            else if(num[j]=='G')
            num[j]='C';
            else if(num[j]=='T')
            num[j]='A';
            if(num[j]=='\0')
            {printf("%s\n",num);break;}
        }
    }
    return 0;
}
