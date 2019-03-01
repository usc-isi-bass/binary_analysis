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


int p,q;
int flag;
char input[100] ;
int judge(int i,int l)
{
    flag = 0 ;
    for (p=i;p<(l/2+i);p++)
       {
           if(input[p] == input[l+2*i-p-1])
                flag++;
       }
    if(flag == l/2)  return 1;
    else return 0;
}
int main()
{
    cin>>input;
    int length = strlen(input) ;
    int k , d ,w ;
    for( d=2;d<=length;d++)
    for (k=0;k<length-1;k++)

           {
               if(judge(k,d)==1)
                   {
                       for (w=k;w<k+d;w++)
                          {
                              cout<<input[w];
                          }
                          cout<<endl;
                   }
           }

}
