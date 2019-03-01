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
    int a,b,c;             //?????
    int worda,wordb,wordc; //???????
    char rank[4];          //????????????
    char final[3]={0};    //????????? 
    for(a=1;a<=3;a++)          //??????
        {
               for(b=1;b<=3;b++)
               {
                                if(b==a) continue;
                                c=(6-a-b);
                                worda=(a>b)+(a==c);     //????????
                                wordb=(a<b)+(a<c);
                                wordc=(b>c)+(b<a);
                                if(worda==(a-1)&&wordb==(b-1)&&wordc==(c-1)) //??????
                                {
                                       rank[a]='A';      //?????
                                       rank[b]='B';
                                       rank[c]='C';
                                       for(int i=1;i<=3;i++)      
                                       {
                                               final[i-1]=rank[4-i];  //??????????? 
                                       }
                                       
                                } 
               }
                                
                                
        }
        cout<<final<<endl;
        return 0;
}