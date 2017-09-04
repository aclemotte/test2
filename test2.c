/*
 ============================================================================
 Name        : test2.c
 Author      : aclemotte
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "test2.h"

#define Ndays 40000


int main(void) {

	int A[Ndays] = {23171, 21011, 21123, 21366, 21013, 21367};//max profit 356
	//int A[Ndays] = {23171, 22011, 21123, 20366, 19013, 18367};//max profit 0
	//int A[Ndays] = {23171, 24011, 25123, 26366, 27013, 26171};//max profit 3842
	//int A[Ndays] = {23171, 24011, 25123, 26171, 25013, 24171};//max profit 3000
	//int A[Ndays] = {23171, 22011, 21123, 20171, 21013, 22171};//max profit 2000

	int solucion = solution(A, Ndays);
	printf("Solucion:%d\n",solucion);
	return EXIT_SUCCESS;
}

int solution(int A[],int N)
{
	int diaVenta = N;
	int diaCompra = diaVenta-1;
	int tempMaxProfit = 0;
	int maxProfit = 0;


	while(diaVenta>0)
	{
		while(diaCompra>0)
		{
			tempMaxProfit = A[diaVenta-1]-A[diaCompra-1];
			if(tempMaxProfit>maxProfit)//si la ganancia es mayor
			{
				maxProfit = tempMaxProfit;
			}
			diaCompra--;
		}
		diaVenta--;
		diaCompra = diaVenta-1;
	}

	return maxProfit;
}
