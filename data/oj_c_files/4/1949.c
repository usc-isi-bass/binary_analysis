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
    int row,col;
    cin>>row>>col;
    int array[row][col];
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cin>>array[i][j];
    }
    
    
    for(i=0;i<col+row-1;i++)//?????
        for(j=i,k=0;(j>=0)&&(k<row);j--,k++)//?????????????????????0???????i?????????????1????1???????0????????
            if(j<col)//????
                cout<<array[k][j]<<endl;
    
    return 0;
}