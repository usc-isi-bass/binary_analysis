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

/* Name      : ?????????? 
 * Version   : 1.0
 * Date      : 2012-12-08
 * New       : Null
 * Func&Feat : ???????? 
 * State     : Design
 */
int main()
{
    int row,col,a[100][100]={0};
    cin>>row>>col;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)cin>>*(*(a+i)+j);
    for(int dia=0;dia<row+col-1;dia++)
    {
        if(dia<col)
            for(int iRow=0;dia-iRow>=0&&iRow<row;iRow++)cout<<*(*(a+iRow)+dia-iRow)<<endl;
        else for(int iRow=dia-col+1;dia-iRow>=0&&iRow<row;iRow++)cout<<*(*(a+iRow)+dia-iRow)<<endl;
    }
    return 0;
}
