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

int hands(int n);
int c[200]={0},b[100];
int main()
{
        char a[100];
        int i=0,num=0,j=1;
        cin>>a;//?????
        c[0]=0;
        for(i=1;i<strlen(a);i++)//????c???????????1???????0
        {
        if(a[i]==a[0]){c[j]=0;j++;num++;}
        else {c[j]=1;j++;num++;}
        }
        for(i=0;i<strlen(a);i++)b[i]=i;//??b???????????????
        hands(num + 1);//????
        return 0;

}
int hands(int n)
{
        int i,j,temp=0;
        for(i=0;i<n;i++)
        {
                if(c[i]==0&&c[i+1]==1)//???????????????
                {cout<<b[i]<<" "<<b[i+1]<<endl;break;}//????????????
        }
        for(j=i+2;j<n;j++)
                {c[j-2]=c[j];b[j-2]=b[j];}//???c???b?????????????
        if(n>2)return hands(n-2);//?n>2????
        else
        {
            
        return 0;
        }
}//hands??
