#include <iostream>


using namespace std;

class Fraction
{
private:
	//Declaring private data members
	int Denom;//Denominator for fraction
	int Num; //Numerator for fraction
public:
	//Prototypes for public member functions
	Fraction();
	void add(Fraction);
	void subtract(Fraction);
	void multiply(Fraction);
	void divide(Fraction);
	void setNumDenom(int, int);
	void getNumDenom(int&, int&);
	void print();
	~Fraction();
};

//Default constructor
Fraction::Fraction()
{
	
}

//adds 2 fractions 
void Fraction::add(Fraction F)
{
	int D, N;
	F.getNumDenom(N,D);//Extracts Numerator and Denominator of fraction 'F'

	//instructions for performing the addition of 2 fractions
	Num = Num * D + N * Denom; //Determining the Numerator
	Denom = D * Denom;         //Determining the Denominator
}

//subtracts 2 fractions 
void Fraction::add(Fraction F)
{
	int D, N;
	F.getNumDenom(N, D);//Extracts Numerator and Denominator of fraction 'F'

	//instructions for performing the subtraction of 2 fractions
	Num = Num * D - N * Denom; //Determining the Numerator
	Denom = D * Denom;         //Determining the Denominator
}