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
    int k,i=0,temp;
    int num[100];
    cin>>k;
    
    for(i=0;i<k;i++)
    cin>>num[i];  //????
    

    for(i=1;i<k;i++) //?????????num[0]
    {if(num[i]>num[0]){ temp=num[0]; num[0]=num[i]; num[i]=temp;}}
    
    for(i=1;i<k;i++)//?????????num[1]
    {if(num[i]>num[1]) { temp=num[1]; num[1]=num[i]; num[i]=temp;}}
    
    cout<<num[0]<<endl;//????
    cout<<num[1]<<endl;//????
    

    return 0;}
