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

main()
{
    int i,n;
    char str[1100];
    int a[26]={0};
    scanf("%s",str);
    str[strlen(str)]=str[strlen(str)-1]+1;
    for(i=0;i<strlen(str)-1;i++)
    {
        if(str[i]==str[i+1]||abs(str[i]-str[i+1])=='a'-'A')
        {
            if(str[i]-'A'<26)
                a[str[i]-'A']++;
            else
                a[str[i]-'a']++; 
        }
        else
        {
            if(str[i]-'A'<26)
                a[str[i]-'A']++;
            else
                a[str[i]-'a']++; 
            if(str[i]-'A'<26)
            {    
                printf("(%c,%d)",str[i],a[str[i]-'A']);
                a[str[i]-'A']=0;
            }
            else
            {
                printf("(%c,%d)",str[i]-'a'+'A',a[str[i]-'a']);
                a[str[i]-'a']=0;
            }
        }
    }
    
}
    