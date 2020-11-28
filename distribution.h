#include<iostream>
#include"particle.h"
#include<random>
#include<string>
#include<cstring>
using namespace std;


class Distribution
{
public:
	Distribution();
	Distribution(string String);
	string Str();
};

class PointDistribution
{
public:
	double x = 0;
	double y = 0;
	double z = 0;

	PointDistribution(double a, double b, double c);
	Point Sample();
	string Str();

	string String;

};

class DistDelta: public Distribution
{
public:
	DistDelta(double v);
	double Sample();


	double v = 0;
	string String;
};

class DistUniform : public Distribution
{
public:

	DistUniform();
	DistUniform(double a1, double a2);

	double v1 = 0;
	double v2 = 0;
	double Sample();

};

class DistWatt:public Distribution
{
public:
	DistWatt();
	double a = 0.988;
	double b = 2.249;
	string String;
	
	double g = 0;
	double xi1 = 0;
	double xi2 = 0;
	double Eout = 0;
	double C = 0;

	double Sample();

};