#include <Math.h>
#include "TVector.h"

void TVector::setVectors(double a[SIZE], double b[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		TVector::v1[i] = a[i];
		TVector::v2[i] = b[i];
	}
}

double TVector::lenVector(double a[SIZE])
{
	double len;
	len = sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
	return len;
}

double TVector::scalVector(double a[SIZE], double b[SIZE])
{
	TVector::setVectors(a, b);
	double compos=0;
	for (int i = 0; i < SIZE; i++)
	{
		compos = compos + (TVector::v1[i] * TVector::v2[i]);
	}
	return compos;
}

double* TVector::vComposVector(double a[SIZE], double b[SIZE])
{
	TVector::setVectors(a, b);
	double newVector[SIZE];
	newVector[0] = TVector::v1[1] * TVector::v2[2]- TVector::v2[1]* TVector::v1[2];
	newVector[1] = -1*(TVector::v1[0] * TVector::v2[2] - TVector::v1[2] * TVector::v2[0]);
	newVector[2] = TVector::v1[0] * TVector::v2[1] - TVector::v1[1] * TVector::v2[0];
	return newVector;
}

double* TVector::nVector(double a[SIZE],double n)
{
	double nVector[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		nVector[i] = a[i] * n;
	}
	return nVector;
}