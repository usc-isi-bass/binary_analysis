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
    int z,q,s,l,x1,x2,x3,x4;//?????? 
    for (z=1;z<=5;z++)//z?1?5?? 
    for (q=1;q<=5;q++)//?? 
    for (s=1;s<=5;s++)//??
    for (l=1;l<=5;l++)//??
    {
        if((z+q)==(s+l)) x1=1;//??z+q=s+l,?x1=1 
        else x1=0;//???? 
        if((z+l)>(s+q)) x2=1;//??z+l>s+q,?x2=1 
        else x2=0;//????
        if((z+s)<q) x3=1;//??z+s<q??x3=1 
        else x3=0;//????
        if ((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l)) x4=1;//????????x4=1 
        else x4=0;//????
        if(x1+x2+x3+x4==4)//??????4????? 
        {
            cout <<"l"<<" "<<l*10<<'\n';//?????? 
            cout <<"q"<<" "<<q*10<<'\n';//????? 
            cout <<"z"<<" "<<z*10<<'\n';//????? 
            cout <<"s"<<" "<<s*10<<'\n';//????? 
        }
    }
    
       return 0;
    }     