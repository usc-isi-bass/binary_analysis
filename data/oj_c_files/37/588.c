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
    for( int i=0;i<n;i++ )
    {
         int j;
         int temp[26]={0};
         char ch[1000001];
         scanf("%s",ch);
         int len=strlen(ch);
         for( j=0;j<len;j++ )
         {
              temp[ch[j]-97]++;
             // cout<<temp[ch[j]-97]     <<endl;
         }
        /* for( int i=0;i<26;i++ )
         {
              cout<<temp[i]<<" ";     
         }*/
         for( j=0;j<len;j++ )
         {
              if( temp[ch[j]-97]==1 )
              {
                  printf("%c\n",ch[j]);   
                  break;
              }
              
         }
         if( j==len )
                   printf("no\n");
    }    
} 