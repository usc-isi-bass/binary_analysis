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
//  ()pipei
//
//  Created by ? ?? on 13-12-4.
//  Copyright (c) 2013? LEE. All rights reserved.
//

char s[10000];//??????????????????
int countl,countr,sum[1000]={0};
//?????????????????????
int pipei(int i)
{
    
    if(s[i]=='\0') return sum[i]=0;
    if(s[i]=='(')
    {   ++countl;
        pipei(i+1);sum[i]+=sum[i+1];
        if(sum[i]>0)
            //????????????>0????
        {s[i]=' ';countl--;countr--;sum[i]--;}
        //??????1
        else {countl--;s[i]='$';}//????
        return 0;
    }
    
    else if(s[i]==')')
    {countr++;sum[i]++;
    if(countl>=countr)
        {s[i]=' ';//????????
        pipei(i+1);
        sum[i]+=sum[i+1];//????????????????
            return 0; }
    else {countr--;s[i]='?';pipei(i+1);
        sum[i]+=sum[i+1];return 0;}
        //????????�?�?????1????????
    }
    else//?????????
    { s[i]=' ';
      pipei(i+1);
    sum[i]+=sum[i+1];
        return 0;
    }
    return 0;
}

int main()
{
    while(cin)//?????????
    {
        cin.getline(s,1000);//??????
        cout<<s<<endl;
        pipei(0);
        cout<<s<<endl;
        countl=countr=0;memset(sum,0,sizeof(sum));
        //???????????????0

    }
    
    return 0;
}