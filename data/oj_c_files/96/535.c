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

/*??(12-11) ??13
??
??????0????N??????100?????????13?????????????
????
????0??????????100?
????
??????????????????*/
int main()
{
        int l,i,t=0,p=0,j,temp,k;
        short int a[100],b[100],r;
        char ip[100];
        cin>>ip;
        l=strlen(ip);
        for(i=0;i<l;i++) a[i]=ip[i]-'0';
        if(l==1)
        {
                cout<<0<<endl<<a[0]<<endl;
                return 0;
        }
        a[1]=a[0]*10+a[1];
        if(l==2)
        {
                cout<<a[1]/13<<endl<<a[1]%13<<endl;
                return 0;
        }
        for(i=1;i<l-1;i++)
        {
                temp=a[i]*10+a[i+1];
                a[i+1]=temp%13;
                cout<<temp/13;
        }
        cout<<endl<<a[l-1];
}
