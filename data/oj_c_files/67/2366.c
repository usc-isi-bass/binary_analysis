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

/************?????****************
??????????
**************************************/
int main()
{
    int n;
    cin>>n;//n????????
    double all[n], eff[n];//all????effective???? 
    double per[n];//percent ?????
    cin>>all[0]>>eff[0];
    per[0]= eff[0]/all[0];
    for (int i=1;i<n;i++)
    {
        cin>>all[i]>>eff[i];
        per[i]=eff[i]/all[i];
        if (per[i]-per[0]>0.05) 
           cout<<"better"<<endl;
        else 
             if (per[0]-per[i]>0.05)
                cout<<"worse"<<endl;
             else 
                  cout<<"same"<<endl;
    }
    return 0;
}
