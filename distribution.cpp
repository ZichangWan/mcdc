#include"distribution.h"

Distribution::Distribution()
{
}

Distribution::Distribution(string String)
{
	string String1 = String;
}




PointDistribution::PointDistribution(double a, double b, double c)
{
	double x=a;
	double y=b;
	double z=c;

	string String = "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";    //???

}

Point PointDistribution::Sample()
{
	return Point(x, y, z);
}

string PointDistribution::Str()
{
	string Dist = "PointDistribution" + String + "\n";
	return Dist;
}




DistDelta::DistDelta(double a)
{
	double v = a;
	String = "Delta" + to_string(v);
	//Distribution(String);
}

double DistDelta::Sample()
{
	return v;
}

DistUniform::DistUniform()
{

}

DistUniform::DistUniform(double a1, double a2)
{

	v1 = a1;
	v2 = a2;
	string String = "Uniform" + to_string(v1) + " " + to_string(v2);
	Distribution::Distribution(String);
}

double DistUniform::Sample()
{
	default_random_engine generator;                                   //random seed 
	uniform_real_distribution<double> distribution(0.0,1.0);
	double xi = distribution(generator);
	return v1 + xi * (v2 - v1);
}

DistWatt::DistWatt()
{

	string String = "Watt" + to_string(a) + " " + to_string(b);
	Distribution::Distribution(String);
}

double DistWatt::Sample()
{
	default_random_engine generator;                                   //random seed 
	uniform_real_distribution<double> distribution(0.0, 1.0);

	g = sqrt(pow((1.0 + a * b / 8.0), 2) - 1.0) + (1.0 + a * b / 8.0);

	while(true)
	{
		xi1 = distribution(generator);
		xi2 = distribution(generator);
		Eout = -a * g * log(xi1);                                        //Mev
		C = pow((1.0 - g) * (1.0 - log(xi1)) - log(xi2), 2);

		if (C <= b * Eout)
			break;

	}

	return Eout * 1.0e+6;                                      //eV
}

