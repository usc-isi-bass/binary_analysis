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

int geshu;//????? 
void yinshu(int num,int a)//?????? 
{
     int i;//??? 
     if (num==1) geshu++;//?1?????? 
     else 
     {
          for(i=a;i<=num;i++)
          {
                              
                        if (num%i==0)//??????? 
                        {
                                                                //cout<<"neibu???"<<i<<" "<<endl;
                                     yinshu(num/i,i);//?num/i????? 
                        }
          }
     }
}
int main()
{
    int shu,j,num1[10000];//shu??????j??????num????? 
    cin>>shu;
    for(j=0;j<shu;j++)
    {
                      geshu=0;
                      cin>>num1[j];
                      //cout<<"???"<<j<<" "; 
                      yinshu(num1[j],2);//????? 
                      cout<<geshu<<endl;//?? 
    }
    cin.get();cin.get();cin.get();cin.get();cin.get(); 
    return 0;
}
