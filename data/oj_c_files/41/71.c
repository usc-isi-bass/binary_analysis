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

/*
 * ????5.cpp
 * ?????
 * ????: 2011-11-6
 * ???????
 */
int main(){
    int a,b,c,d,e;//??????A?B?C?D?E????
    for(a=1;a<=5;a++)
    	{for(b=1;b<=5;b++)
    		{if(a==b)continue;//??A,B????
    		for(c=1;c<=5;c++)
    			{if((a==c)||(b==c))continue;//??A,B,C????
    			for(d=1;d<=5;d++)
    				{if((a==d)||(b==d)||(c==d))continue;//??A,B,C,D????
    				e=15-a-b-c-d;//???E???
    					if((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)!=2)continue;//??????????,??
    					else if(((((a==1)||(a==2))&&(e==1))+(((b==1)||(b==2))&&(b==2))+(((c==1)||(c==2))&&(a==5))+(((d==1)||(d==2))&&(c!=1))+(((e==1)||(e==2))&&(d==1))==2)&&((e!=2)&&(e!=3)))//????1,2???????
    					{cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;return 0;}//??????,?????
    				}
    			}
    		}
    	}
	return 0;//????
}
