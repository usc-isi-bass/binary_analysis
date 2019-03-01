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
    int a=0,b=0,c=0,d=0,e=0,f=0,i=0;
    cin>>a;//a????
    for(e=1;e<=a;e++)
    {
        cin>>b;//?????b
        if(b==0) cout<<"60"<<endl;
		else
        {
            for(c=1;c<=b;c++)
            {
                cin>>d;//???d?
                if((d+3*c)<=60)//???1??????
                {
                    i=d-((d+3*c)-60);//????1????????????
                    f=60-3*c;
                }
                else if(((d+3*(c-1))<=60)&&((d+3*c)>60))//???????????????1??????
                {
                    i=d;//????1????????????
                    f=d;
                }
                else//??1??????
                {
                    f=i;//????????
                }
            }
            cout<<f<<endl;
        }
    }
	return 0;
}