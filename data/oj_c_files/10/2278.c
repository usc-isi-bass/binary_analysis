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



int max(int* data,int lens)
{
    int r=*data;
    for(int j=0;j<lens;j++)if(*(data+j)>r)r=*(data+j);
    return r;
}
int f(int* data,int lens,int height)
{
    int tempResult[25];
    if(lens==0)return 0;
    int count=0,tempHeight=0;
    for(int i=0;i<lens;i++)
    {
                       if(data[i]<=height && data[i]>=tempHeight)
                       {tempHeight=data[i];tempResult[count]=f(data+i+1,lens-i-1,data[i]);count++;}
                       
    }
    if(count==0)return 0;
    return max(tempResult,count)+1;
}                   
                       

int main()
{
    int data[25];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>data[i];
    cout<<f(data,n,max(data,n));
   
                 return 0;
}  
