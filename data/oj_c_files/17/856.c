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
       char a[100];
       int nn;
       scanf("%d",&nn);
       while(gets(a))
       {
             char ans[101];
             for(int i=0;i<101;i++)
             {
                  ans[i]=' ';
             }
             printf("%s\n",a);
             int L=strlen(a);
             ans[L]='\0';
             int mark=0;
             for(int i=99;i!=-1;i--)
             {
                  if(a[i]=='(')
                  {
                      for(int j=i+1;;j++)
                      {
                            if(a[j]==')')
                            {
                            a[i]='0';
                            a[j]='0';
                            mark++;
                            break;
                            }
                            if(j==101)
                            {
                             a[i]='0';
                             ans[i]='$';
                             break;
                            }
                       }
                    }
                }
                for(int i=0;i<101;i++)
                    if(a[i]==')') ans[i]='?';
                printf("%s\n",ans);
       }
}