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
    char string[100][100];
    int age[100];
    int age1[100];
    int a[100];
    int max,n,l,i,j,k,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s %d",string[i],&age[i]);
       j=0;
       for(i=0;i<n;i++)
       {
                        if(age[i]>=60)
                        {
                                      age1[j]=age[i];
                                      age[i]=0;
                                      a[j]=i;
                                      j++;
                                      }
                                      }
                                      for(i=0;i<j;i++)
                                      {
                                                      max=0;
                                                      x=0;
                                                      for(k=0;k<j;k++)
                                                      {
                                                                      if(max<age1[k])
                                                                      {
                                                                                     max=age1[k];
                                                                                     x=k;
                                                                                     }
                                                                                     }
                                                                                     printf("%s\n",string[a[x]]);
                                                                                     age1[x]=0;
                                                                                     }
                                    for(i=0;i<n;i++)
                                      if(age[i]!=0)
                                      printf("%s\n",string[i]);                                                 
                                                                                     
                                      
                                      
                         
                   
                     
     
     getchar();
     getchar();
     }
