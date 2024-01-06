#pragma once

// densityEstimate class if you don't want to use inheritance
class densityEstimateNI
{
private:
	double dENI_X1, dENI_X2, dENI_k, dENI_beta;

protected:

public:
	densityEstimateNI(double X1, double X2, double k, double beta);
	~densityEstimateNI();
	double rhoNI(double x1, double x2);
};
