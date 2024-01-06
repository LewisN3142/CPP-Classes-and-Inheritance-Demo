#pragma once

class gramian2
{
private: 

protected:
	// These need to be protected or public to be accessed by subclasses (protected better as reduces access)
	// Can be moved back to private if you don't want to use inheritance
	double g_x1, g_x2, g_y1, g_y2, g_k;

public:
	gramian2(double x1, double x2, double y1, double y2, double k); // Non-empty constructor
	gramian2(); // Default empty constructor needed for inheritance
	~gramian2(); // Destructor
	double gramCalc(); // Your function - if you only want to call this using a gramian2 object or a densityEstimate object, move to protected
};


// densityEstimate class if you want to use inheritance
class densityEstimate : public gramian2
{
private:
	double dE_beta; // densityEstimate also inherits the g_ private variables

public:
	// N.B. as the inputs for X1 and X2 are the same as for y1 and y2 of gramian2, did not need to rename them
	densityEstimate(double x1, double x2, double X1, double X2, double k, double beta); // New non-empty constructor (has gramian2 inputs and extra beta
	~densityEstimate(); // Destructor
	double rho();
	double functionV();
};


