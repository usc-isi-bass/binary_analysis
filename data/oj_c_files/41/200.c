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
	int N[5],M[5];
	for( N[0]=1;N[0]<6;N[0]++)
		for( N[1]=1;N[1]<6;N[1]++)
			if(N[0]!=N[1])
			{
				for(N[2]=1;N[2]<6;N[2]++)
					if(N[2]!=N[0]&&N[2]!=N[1])
					{
						for(N[3]=1;N[3]<6;N[3]++)
							if(N[3]!=N[0]&&N[3]!=N[1]&&N[3]!=N[2])
							{
								for( N[4]=1;N[4]<6;N[4]++)
								{
									if(N[4]!=N[0]&&N[4]!=N[1]&&N[4]!=N[2]&&N[4]!=N[3]&&N[4]!=2&&N[4]!=3)
									{
										M[0]=(N[4]==1);
										M[1]=(N[1]==2);
										M[2]=(N[0]==5);
										M[3]=(N[2]!=1);
										M[4]=(N[3]==1);
										if(M[1]+M[2]+M[3]+M[4]+M[0]==2)
										{
											int s=0;
											for(int i=0;i<5;i++)
											{
												if(M[i]==1&&(N[i]==1||N[i]==2))
													s++;
											}
												if(s==2)
												{
													for(int j=0;j<4;j++)
														cout<<N[j]<<" ";
														cout<<N[4]<<endl;
												}
											
										}
									}
								}
							}		
					}
			}

	return 0;
}

