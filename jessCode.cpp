#include<iostream>
#include "gramian2.h"  // Header containing gramian2 class and densityEstimate child
#include "densityEstimateNI.h" // Header containing densityEstimateNI class (no inheritance)

// How to execute these methods within the main function
int main()
{
	gramian2 myGramian(0, 0, 1, 1, 1);
	std::cout << "Using gramCalc() native to parent class " << myGramian.gramCalc() << "\n" << std::endl; // Performs the calculation

	densityEstimate myDensity(0, 0, 1, 1, 1, 2);
	std::cout << "Using inherited gramCalc() " << myDensity.gramCalc() << std::endl;
	std::cout << "Using child method rho() " << myDensity.rho() << "\n" << std::endl;

	densityEstimateNI myDENI(1, 1, 1, 2);
	std::cout << "Using rhoNI() native to class " << myDENI.rhoNI(0, 0) << std::endl;
}