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

//
//  main.cpp
//  relocateapples
//
//  Created by ? ?? on 13-11-21.
//  Copyright (c) 2013? LEE. All rights reserved.
//


int n,k;//??????????total??x??
int total=0;
float xishu=0.0;
int main()
{   int msees(int x,int y);
    cin>>n>>k;
    total=n;int i;
    xishu=(float)n/(n-1);//???????????????float??
while(true)
    {for(i=1;i<=n;i++)
        { if((msees(i,k)-k)%n!=0)//???????????
            break;
        }
        
    if(i==n+1)break;
    total+=n;
    }
        cout<<msees(n,k)<<endl;
    
    return 0;
}

int msees(int x,int y)
{
    if(x==1)return total+y;//??????????????????n+k???
    return y+xishu*msees(x-1,y);//??????
}
