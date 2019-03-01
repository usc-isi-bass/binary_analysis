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
    int a[200][200];
    int row ,col;
    int i,j;
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cin>>a[i][j];
        }
    }
    int upm,downm,right,left;
    upm=1;
    downm=row;
    right=col;
    left=1;
    int time=0;
    while(1)
    {
      for(j=left;j<=right;j++)
      {
        cout<<a[upm][j];
        if(time<row*col-1)
            cout<<endl;
        time=time+1;

      }
      if(time==row*col)
        break;

      for(i=upm+1;i<=downm;i++)
      {
        cout<<a[i][right];
        if(time<row*col-1)
            cout<<endl;
        time=time+1;
      }
      if(time==row*col)
        break;

      for(j=right-1;j>=left;j--)
      {
          cout<<a[downm][j];
          if(time<row*col-1)
            cout<<endl;
          time=time+1;

      }
      if(time==row*col)
        break;


          for(i=downm-1;i>upm;i--)
        {
           cout<<a[i][left];
           if(time<row*col-1)
            cout<<endl;
           time=time+1;
        }

   if(time==row*col)
        break;




      upm=upm+1;
      downm=downm-1;
      right=right-1;
      left=left+1;
    }






    return 0;
}
