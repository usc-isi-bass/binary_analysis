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
{int a[5];
 int i,j;
 int cc[5];
 int o=1;
 int k[6]={0};
 for(a[0]=1;a[0]<=5;a[0]++)
 {
     for(a[1]=1;a[1]<=5;a[1]++)
     {
                               for(a[2]=1;a[2]<=5;a[2]++)
                               {
                                                for(a[3]=1;a[3]<=5;a[3]++)
                                               {
                                                    for(a[4]=1;a[4]<=5;a[4]++)
                                                    {if((a[0]!=a[1])&&(a[0]!=a[2])&&(a[0]!=a[3])&&(a[0]!=a[4])&&(a[4]==4)&&(a[1]!=a[2])&&(a[1]!=a[3])&&(a[1]!=a[4])
                                                    &&(a[2]!=a[3])&&(a[2]!=a[4])&&(a[3]!=a[4])&&(a[2]==1))
                                                       {cc[0]=(a[4]==1);
                                                        cc[1]=(a[1]==2);
                                                        cc[2]=(a[0]==5);
                                                        cc[3]=(a[2]!=1);
                                                        cc[4]=(a[3]==1);
                                                        for(j=1;j<=2;j++)
                                                        {for(i=0;i<=4;i++)
                                                           {if((a[i]==j)&&(cc[i]==1))
                                                           k[j]=1;
                                                           }
                                                        }
                                                        for(j=3;j<=5;j++)
                                                        {for(i=0;i<=4;i++)
                                                           {if((a[i]==j)&&(cc[i]==0))
                                                           k[j]=1;

                                                           }
                                                        }

                                                       if((k[1]==1)&&(k[2]==1)&&(k[3]==1)&&(k[4]==1)&&(k[5]==1))
                                                       {for(i=0;i<=3;i++)
                                                       {cout<<a[i]<<" ";}
                                                       cout<<a[4];
                                                       }

                                                    }
                                                    k[1]=0;k[2]=0;k[3]=0;k[4]=0;k[5]=0;

                                               }

                             }
     }
   }
}
   return 0;
}