#include<stdio.h>


int main()
{
	int massiv[3] = {1,2,3};
	int *p_mas1 = &massiv[0];
	int *p_mas2 = &massiv[1];
	int *p_mas3 = &massiv[2];
	
	int *msrs[3] = {p_mas1,p_mas2,p_mas3};


	for(int i = 0; i < 3; i++)
	{
		fprintf(stdout,"Index[%d]\tValue[%d]\tAdress=%p\n",i,*msrs[i],msrs[i]);
	}



}
