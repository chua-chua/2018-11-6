/*
行数n、中间空格数由用户输入
空1,*1, 空2,   *2

     *       *********
    ***       *******
   *****       *****
  *******       ***
 *********       *
*/
#include<stdio.h>
int main()
{
	int m = 5;
	int n = 6;
	int i,j;
	for( i=0;i<n;i++ )					//n行
	{
		for( j=0;j<n-i;j++ )			//空1
			printf(" ");
		for( j=0;j<2*i+1;j++ )			//*1
			printf("*");
		for( j=0;j<m;j++ )				//空2
			printf(" ");
		for( j=0;j<2*(n-i)-1;j++ )		//*2
			printf("*");
		printf("\n");
	}
	return 0;
}