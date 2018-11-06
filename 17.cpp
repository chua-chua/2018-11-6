/*
-----------------------------------------------------
COUMTRY		AREA(10k km2)	POP(10k)	GDP(Billion $)
-----------------------------------------------------
China		960.00			129500.00	 1080.00
Iceland		 10.30				27.57		8.20
India		297.47			 97000.00	  264.80
Madagascar	 62.70			  1635.00		3.60	
Maldive		0.0298				27.80		0.23
-----------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
struct Country
{
	char	name[15];
	double	area;
	double	pop;
	double	gdp;
};
int main()
{
	printf("--------------------------------------------------------------\n");
	printf("COUNTRY \tAREA(10k km2) \tPOP(10k) \tGDP(Billion $) \n");
	printf("--------------------------------------------------------------\n");
	Country c[5];
	strcpy(c[0].name,"China");		//
	c[0].area	= 960;
	c[0].pop	= 129500;
	c[0].gdp	= 1080;

	strcpy(c[1].name,"Iceland");	//
	c[1].area	= 10.30;
	c[1].pop	= 27.57;
	c[1].gdp	= 8.20;

	strcpy(c[2].name,"India");		//
	c[2].area	= 297.47;
	c[2].pop	= 97000.00;
	c[2].gdp	= 264.80;

	strcpy(c[3].name,"Madagascar"); //
	c[3].area	= 62.70;
	c[3].pop	= 1635.00;
	c[3].gdp	= 3.60;

	strcpy(c[4].name,"Maldive");	//
	c[4].area	= 0.0298;
	c[4].pop	= 27.80;
	c[4].gdp	= 0.23;

	int i;
	for( i=0;i<5;i++ )				//´òÓ¡Êý¾Ý
	{
		printf("%s  	",c[i].name);
		if( i==0 || i==2 )
			printf("\t");
		printf("%10.2f	",c[i].area);
		printf("%10.2f	",c[i].pop);
		printf("%10.2f  \n",c[i].gdp);
	}
	printf("--------------------------------------------------------------\n");
	return 0;
}