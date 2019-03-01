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
//  ????
//
//  Created by ???? on 13-12-25.
//  Copyright (c) 2013? ????. All rights reserved.
//

int main()
{
    int n;
    struct dis
    {
        int  x;
        int  y;
        double dis;
    } a[2000];
    
    double num[2000][2];
    double max=0;
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num[i][0]>>num[i][1];
    }
    
    int t=1;
    
    for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
                {
                    a[t].x=i;
                    a[t].y=j;
                    a[t].dis=sqrt(  (num[i][0]-num[j][0])*(num[i][0]-num[j][0])
                                  + (num[i][1]-num[j][1])*(num[i][1]-num[j][1]) );
                    t++;
                    //cout<<a[t].dis<<endl;
                }
        }

    for(int i=1;i<n*n;i++)
    {
        if(a[i].dis>=max)
            max=a[i].dis;
        //cout<<max;
    }
    
    printf("%.4f\n",max);
    
    
    return 0;
}
