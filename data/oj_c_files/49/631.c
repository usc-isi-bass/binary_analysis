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
    char a[500];
    char t[500];//??? 
    char b[1000][500];//????? 
    cin>>a;
    int i,j,k,r;
    int count=0;
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
                    for(k=1;i+k<l;k++)
                    {
                                      int h=1;//???????? 
                                      for(j=0;j<=k;j++)
                                      {
                                                       if(a[i+j]!=a[i+k-j])
                                                       {
                                                                           h=0;
                                                                           break; 
                                                       }
                                      }//?????????????????? 
                                      if(h==1)
                                      {
                                              for(j=0;j<=k;j++)
                                              {
                                                               b[count][j]=a[i+j];
                                              }
                                              count++;
                                      }//???????????b 
                    }
    }
    for(i=0;i<count;i++)
    {
                        for(j=count-2;j>=i;j--)
                        {
                                               if( strlen(b[j])>strlen(b[j+1]) )
                                               {
                                                   strcpy(t,b[j]);
                                                   strcpy(b[j],b[j+1]);
                                                   strcpy(b[j+1],t);
                                               }//?????????? 
                        }
    }
    for(r=0;r<count;r++)
    {
                        cout<<b[r]<<endl;
    }//?? 
    return 0;
}
    
