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
    char in[501];
    char zi[501];
    cin.getline(in,500,'\n');
    int L,judge=1;
    L=strlen(in);
    for(int i=2;i<=L;i++)
      for(int j=0;j<=L-i;j++)
         {
            memset(zi,0,sizeof(zi));
            for(int k=j;k-j<i;k++)
                zi[k-j]=in[k];
            judge=1;
            for(int k=0;k<i/2;k++)
                if(zi[k]!=zi[i-k-1])  {judge=0; break;}
            if(judge==1)  cout<<zi<<endl;
         }
    return 0;
}
