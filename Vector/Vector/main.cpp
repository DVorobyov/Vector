#include <iostream>
#include "TVector.h"

int main()
{
	double a[SIZE];
	double b[SIZE];
	TVector *vec = new TVector();

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> b[i];
	}

	std::cout << vec->lenVector(a)<<"\n";
	std::cout << vec->nVector(a,4)[0]<<" "<<vec->nVector(a, 4)[1] << " "<<vec->nVector(a, 4)[2] << "\n";
	std::cout << vec->scalVector(a,b)<<"\n";
	std::cout << vec->vComposVector(a,b)[0]<<" "<< vec->vComposVector(a, b)[1] << " " << vec->vComposVector(a, b)[2];
	getchar();
	getchar();

}