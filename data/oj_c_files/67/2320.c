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
    int n;                                   //??n
    cin>>n;                                  //??n
    float total[100],effective[100];         //?????????????
    int i;                                   //??????i
    for(i=0;i<n;i++)
    {
        cin>>total[i]>>effective[i];        //???????
    }
    float x,y[100];                         //????????????????
    x=effective[0]/total[0];                //????????
    for(i=1;i<n;i++)
    {

        y[i]=effective[i]/total[i];         //??????????????
        if(y[i]-x>0.05)
            cout<<"better"<<endl;
        else
        {
            if(x-y[i]>0.05)
            cout<<"worse"<<endl;
            else cout<<"same"<<endl;        //????????????
        }
    }
    return 0;
}

