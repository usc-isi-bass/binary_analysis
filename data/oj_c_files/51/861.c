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
    int a,b,c,n,i,j;
    char s[500];
    int d[500]={0}; 
    scanf("%d",&n);
    scanf("%s",s);
    a=strlen(s);
    if(n==3)
    {for(i=0;i<a-2;i++)
    {
                      for(j=0;j<a-2;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-2;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                      if(b==1)
                      printf("NO");
                      else
                      {
                      printf("%d\n",b);
        for(i=0;i<a-2;i++)
    {
        if(d[i]==b)
        {
                   printf("%c%c%c\n",s[i],s[i+1],s[i+2]);
                    for(j=0;j<a-2;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2])
                      d[j]=0;
                                      }
                   }
        }}
     }
     if(n==2)
       {for(i=0;i<a-1;i++)
    {
                      for(j=0;j<a-1;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-1;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                        if(b==1)
                      printf("NO");
                      else
                      {
                      printf("%d\n",b);
        for(i=0;i<a-1;i++)
    {
        if(d[i]==b)
        {
                   printf("%c%c\n",s[i],s[i+1]);
                    for(j=0;j<a-1;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1])
                      d[j]=0;
                                      }
                   }
        }}
     }
         if(n==4)
    {for(i=0;i<a-3;i++)
    {
                      for(j=0;j<a-3;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2]&&s[j+3]==s[i+3])
                      d[i]++;
                                      }
                    
                    }
    b=0;
    for(i=0;i<a-3;i++)
    {
                      if(b<d[i])
                      b=d[i];
                      }
                        if(b==1)
                      printf("NO");
                      else
                      {
                      printf("%d\n",b);
        for(i=0;i<a-3;i++)
    {
        if(d[i]==b)
        {
                   printf("%c%c%c%c\n",s[i],s[i+1],s[i+2],s[i+3]);
                    for(j=0;j<a-3;j++)
                      {
                      if(s[j]==s[i]&&s[j+1]==s[i+1]&&s[j+2]==s[i+2]&&s[j+3]==s[i+3])
                      d[j]=0;
                                      }
                   }
        }}
     }
   
    
}
