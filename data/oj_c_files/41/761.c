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
    int a[5];
    int z;
    int  b[6]={0};
    int i,j,k,l,m;
//int i;
    int r=1;
    int q;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)

            for(k=1;k<=5;k++)
           {
                for(l=1;l<=5;l++)
              {
                    for(m=1;m<=5;m++)
                    {
                        a[0]=i;a[1]=j;a[2]=k;a[3]=l;a[4]=m;
                        //if((a[0]==5)&&(a[1]==1)&&(a[2]==2)&&(a[3]==3)&&(a[4]==4))
                      //{




                        if((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[0]!=a[4])&&(a[1]!=a[2])&&(a[1]!=a[3])&&(a[1]!=a[4])&&(a[2]!=a[3])&&(a[2]!=a[4])&&(a[3]!=a[4]))
                        {
                           // cout<<"?";
                            if(a[4]==1)
                            b[a[0]]=1;
                            if(a[1]==2)
                            b[a[1]]=1;
                            if(a[0]==5)
                            b[a[2]]=1;
                            if(a[2]!=1)
                            b[a[3]]=1;
                            if(a[3]==1)
                            b[a[4]]=1;
                     // for(i=0;i<=4;i++)

                      //{

                      //  cout<<b[a[i]];
                      //}
                            if((a[4]!=2)&&(a[4]!=3))

                            {  // cout<<"!";
                                if((b[a[0]]+b[a[1]]+b[a[2]]+b[a[3]]+b[a[4]])==2)

                             {         //cout<<"!";
                                    for(z=0;z<=4;z++)
                                    {
                                        if(((a[z]==1)||(a[z]==2))&&(b[a[z]]!=1))
                                            r=0;
                                    }
                                if(r!=0)
                                  {


                                cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
                                  }
                              }

                            }



                       }
                      }
                          r=1;
                            for(q=1;q<=5;q++)
                            {
                                b[q]=0;
                            }


                    }
              //}
                }
            }




    return 0;
}