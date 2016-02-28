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



