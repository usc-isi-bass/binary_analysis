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
    int jinzhi1,jinzhi2,length,i,j,m=0,n,sum=0,k;//jinzhi1?????????jinzhi2???????,length???????i?j?m?n?k?????sum?????? 
    int shu[40],shu2[40];//?????????????????? 
    char input[40],output[40];//input?????output??????
    cin>>jinzhi1>>input>>jinzhi2;
    length=strlen(input);//??????? 
    for(i=0;i<length;i++)
    {
                     shu[i]=input[i];//??????????????ASCII? 
                     if(shu[i]<65) shu[i]=shu[i]-48;//????? 
                     else if (shu[i]<97) shu[i]=shu[i]-55;//???? 
                     else shu[i]=shu[i]-87;//???? 
                     for(j=length-i-1;j>0;j--) shu[i]=shu[i]*jinzhi1; 
                     sum=sum+shu[i];//??????                         
    }
    if (sum==0) cout<<sum;
    else
    {
        for(k=0;sum>0;k++) 
        {
             shu2[k]=sum%jinzhi2;//?????? 
             sum=sum/jinzhi2;
             if (shu2[k]<10) shu2[k]=shu2[k]+48;//????ASCII?????? 
             else shu2[k]=shu2[k]+55;
             output[k]=shu2[k];
             m++;
        }
    for(n=m-1;n>=0;n--) cout<<output[n];//???????????????????
    } 
    cin.get();
    cin.get(); cin.get(); cin.get(); cin.get(); cin.get();
    return 0;
}