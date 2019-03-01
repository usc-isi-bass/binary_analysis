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

    int a;
    int an1[MAX+10]={0};
    int an2[MAX+10]={0};
    char szLine1[MAX+10]={0};
    char szLine2[MAX+10]={0};
int main()
{
    scanf("%s",szLine1);
    scanf("%s",szLine2);
    int i,j;
    int nLen1=strlen(szLine1);
    int nLen2=strlen(szLine2);
    j=0;
    for(i=nLen1-1;i>=0;i--)
    {
                           an1[j++]=szLine1[i]-'0';
    }
    j=0;
    for(i=nLen2-1;i>=0;i--)
    {
                           an2[j++]=szLine2[i]-'0';
    }
    for(i=0;i<MAX;i++)
    {
                      an1[i]+=an2[i];
                      if(an1[i]>=10)
                      {
                                    an1[i]-=10;
                                    an1[i+1]++;
                      }
    }
    for(i=MAX;i>=0;i--)
    {
                       if(an1[i]!=0)
                       {
                          a=i;
                          break;
                       }
                       
    }
    for(i=a;i>=0;i--)
    { 
    printf("%d",an1[i]);
    } 
    
}
    