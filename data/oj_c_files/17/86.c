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
    int i,n=0,k,p,count1=0,count2=0;
    char a[100][1000],b[1000][1000];
    for(i=0;i<100;i++)
    {
                      for(k=0;k<100;k++)
                      {
                                      b[i][k]=' ';
                      }
    }
    for(i=0;i<100;i++)
    {
                      scanf("%s",a[i]);
                      n++;
                      if(a[i][0]=='\0')
                      break;
    }
    for(i=0;i<n;i++)
    {
                      printf("%s\n",a[i]);
                      for(k=0;k<strlen(a[i]);k++)
                      {
                                                 if(a[i][k]==')')
                                                 {
                                                      for(p=k-1;p>=0;p--)
                                                      {
                                                                         if(a[i][p]=='('){
                                                                                          a[i][p]='.';
                                                                                          a[i][k]='.';
                                                                                          break;
                                                                                          }
                                                                         else if(a[i][p]==')'){
                                                                              break;
                                                                              }
                                                      }
                                                 } 
                      }
                      for(k=0;k<strlen(a[i]);k++)
                      {
                                                 if(a[i][k]=='(')
                                                 b[i][k]='$';
                                                 else if(a[i][k]==')')
                                                 b[i][k]='?';
}
                      b[i][strlen(a[i])]='\0';
                      printf("%s\n",b[i]);
    }
    return 0;
} 