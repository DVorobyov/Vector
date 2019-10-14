#pragma once
#define SIZE 3

class TVector
{
public:
	void setVectors(double a[SIZE], double b[SIZE]);
	double lenVector(double a[SIZE]);
	double scalVector(double a[SIZE], double b[SIZE]);
	double* vComposVector(double a[SIZE], double b[SIZE]);
	double* nVector(double a[SIZE], double n);
private:
	double v1[3];
	double v2[3];
};