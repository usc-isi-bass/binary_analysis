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

/* Name      : ??????????? 
 * Version   : 2.0
 * Date      : 2012-11-24
 * New       : Null
 * Func&Feat : 
 * State     : Design
 */
int pairs(int,int,char text[],char match[]);
int main()
{
    for(;;)
    {
        char text[101]={0},match[101]={0};       //???text????????match?????? 
        int lgth=0;                              //???lgth??text???brkt[]????????????-1??????1? 
        gets(text);                              //??gets()?????????????????????? 
        if(text[0]==0)break;                     //???????????????????? 
        for(int i=0;i<101;i++)                   //???????text????????????? 
        {
            if(text[i]!=0)
            {
                if(text[i]=='(')match[i]='$';    //??text[]?????brkt[]???-1?match[]????'$' 
                else if(text[i]==')')match[i]='?';//??text[]?????brkt[]???1?match[]????'?' 
                else match[i]=' ';               //??text[]?????brkt[]?????0?match[]?????? 
            }
            else                                 //??text[]?????????text????? 
            {
                lgth=i;
                break;
            }
        }
        pairs(0,0,text,match);
        cout<<text<<endl<<match<<endl;
    }
    return 0;
}
int pairs(int n,int hemi,char text[],char match[])
{
    for(;;)
    {
        char c=text[n];
        if(c==0)return -1;
        if(c=='(')
        {
            int l=n;
            int r=pairs(n+1,1,text,match);
//            cout<<l<<' '<<r<<endl;
            if(r!=-1)
            {
                match[l]=match[r]=' ';
                n=r+1;
            }
            else return -1;
        }
        else if(c==')'&&hemi==1)return n;
        else n++;
    }
}
