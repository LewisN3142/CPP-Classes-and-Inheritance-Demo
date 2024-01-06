#include <iostream>
#include "densityEstimateNI.h"

// Class methods for densityEstimateNI
densityEstimateNI::densityEstimateNI(double X1, double X2, double k, double beta)
{
	dENI_X1 = X1;
	dENI_X2 = X2;
	dENI_k = k;
	dENI_beta = beta;

	std::cout << "densityEstimateNI object created" << std::endl;
}

densityEstimateNI::~densityEstimateNI()
{
	std::cout << "densityEstimateNI object destroyed" << std::endl;
}

double densityEstimateNI::rhoNI(double x1, double x2)
{
	gramian2 G2(x1, x2, dENI_X1, dENI_X2, dENI_k);
	return G2.gramCalc();
}