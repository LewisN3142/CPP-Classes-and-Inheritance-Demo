#include <iostream> 
#include "gramian2.h" 

// Class methods for gramian2
gramian2::gramian2(double x1, double x2, double y1, double y2, double k) 
{
	g_x1 = x1;
	g_x2 = x2;
	g_y1 = y1;
	g_y2 = y2;
	g_k = k;

	std::cout << "gramian2 object created" << std::endl;
}

gramian2::gramian2()
{
	g_x1 = 0;
	g_x2 = 0;
	g_y1 = 0;
	g_y2 = 0;
	g_k = 0;
	std::cout << "Empty gramian2 object created" << std::endl;
}

gramian2::~gramian2()
{
	std::cout << "gramian2 object destroyed" << std::endl;
}

double gramian2::gramCalc()
{
	double dist = pow(g_x1 - g_y1, 2) + pow(g_x2 - g_y2, 2);
	dist = sqrt(dist)/(2*pow(g_k,2));
	dist = exp(dist);
	return dist;
}

// Class methods for densityEstimate
densityEstimate::densityEstimate(double x1, double x2, double X1, double X2, double k, double beta)
{
	g_x1 = x1;
	g_x2 = x2;
	g_y1 = X1;
	g_y2 = X2;
	g_k = k;
	dE_beta = beta;
	std::cout << "densityEstimate object (child of gramian2) created" << std::endl;
}

densityEstimate::~densityEstimate() 
{
	std::cout << "densityEstimate object (child of gramian2) destroyed" << std::endl;
}

double densityEstimate::rho()
{
	return gramCalc(); // Your code here (current script redundant as densityEstimate inherits gramCalc())
}

double densityEstimate::functionV()
{
	return 0; // Your code here
}


