// TestNormal.cpp
//
// First program test the Boost statistics library.
//
// Look at the Normal distribution because it is important.
// And gamma distribution
//
// 2008-6-27 DD initial code
// 2011-11-9 DD for QN course
//
// (C) Datasim Education BV 2009-2011
//

#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/gamma.hpp>
#include <boost/math/distributions.hpp> // For non-member functions of distributions

#include <vector>
#include <iostream>

using namespace std;


int main()
{
	// Don't forget to tell compiler which namespace
	using namespace boost::math;

	double scale_parameter = 0.5;
	// exponential_distribution<> myExponential(scale_parameter); // Default type is 'double'
	normal_distribution<> myExponential(1, 10);
	cout << "Mean: " << mean(myExponential) << ", standard deviation: " << standard_deviation(myExponential) << endl;

	// Distributional properties
	double x = 10.25;

	cout << "pdf: " << pdf(myExponential, x) << endl;
	cout << "cdf: " << cdf(myExponential, x) << endl;

	// Choose another data type and now a N(0,1) variate
	exponential_distribution<float> myExponential2; 
	cout << "Mean: " << mean(myExponential2) << ", standard deviation: " << standard_deviation(myExponential2) << endl;
	
	cout << "pdf: " << pdf(myExponential2, x) << endl;
	cout << "cdf: " << cdf(myExponential2, x) << endl;

	// Choose precision
	cout.precision(10); // Number of values behind the comma

	// Other properties
	cout << "\n***normal distribution: \n";
	cout << "mean: " << mean(myExponential) << endl;
	cout << "variance: " << variance(myExponential) << endl;
	cout << "median: " << median(myExponential) << endl;
	cout << "mode: " << mode(myExponential) << endl;
	cout << "kurtosis excess: " << kurtosis_excess(myExponential) << endl;
	cout << "kurtosis: " << kurtosis(myExponential) << endl;
	cout << "characteristic function: " << chf(myExponential, x) << endl;
	cout << "hazard: " << hazard(myExponential, x) << endl;

	// Gamma distribution
	double alpha = 3.0; // Shape parameter, k
	double beta = 0.5;	// Scale parameter, theta
	gamma_distribution<double> myGamma(alpha, beta);

	double val = 13.0;
	cout << endl <<  "pdf: " << pdf(myGamma, val) << endl;
	cout << "cdf: " << cdf(myGamma, val) << endl;

	vector<double> pdfList;
	vector<double> cdfList;

	double start = 0.0;
	double end = 10.0;
	long N = 30;		// Number of subdivisions

	val = 0.0;
	double h = (end - start) / double(N);

	for (long j = 1; j <= N; ++j)
	{
		pdfList.push_back(pdf(myGamma, val));
		cdfList.push_back(cdf(myGamma, val));

		val += h;
	}

	for (long j = 0; j < pdfList.size(); ++j)
	{
		cout << pdfList[j] << ", ";

	}

	cout << "***" << endl;

	for (long j = 0; j < cdfList.size(); ++j)
	{
		cout << cdfList[j] << ", ";

	}

	return 0;
}