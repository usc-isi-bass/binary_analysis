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

int fanxu(int num)
{
    cout<<num%10;
    if(num/10!=0) fanxu(num/10);
}//????????? 
int main()
{
    int shu[6],i;
    for(i=0;i<6;i++) cin>>shu[i];
    for(i=0;i<6;i++)
    {
                    if(shu[i]!=0 && shu[i]%10==0)
                    {
                                    do
                                    {
                                        shu[i]=shu[i]/10;
                                    }while(shu[i]%10==0);
                    }//??10??????????10???? 
                    if(shu[i]>=0)
                    {
                                 fanxu(shu[i]);
                                 cout<<endl;
                    }//???????? 
                    else 
                    {
                         cout<<"-";
                         shu[i]=-shu[i];
                         fanxu(shu[i]);
                         cout<<endl;
                    }//??????? 
    }
cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}
