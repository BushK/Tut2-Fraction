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
void Fraction::subtract(Fraction F)
{
	int D, N;
	F.getNumDenom(N, D);//Extracts Numerator and Denominator of fraction 'F'

	//instructions for performing the subtraction of 2 fractions
	Num = Num * D - N * Denom; //Determining the Numerator
	Denom = D * Denom;         //Determining the Denominator
}

//multiplies 2 fractions 
void Fraction::multiply(Fraction F)
{
	int D, N;
	F.getNumDenom(N, D);//Extracts Numerator and Denominator of fraction 'F'

	//instructions for performing the multiplication of 2 fractions
	Num = Num *  N ;           //Determining the Numerator
	Denom = D * Denom;         //Determining the Denominator
}

//divides 2 fractions 
void Fraction::divide(Fraction F)
{
	int D, N;
	F.getNumDenom(N, D);//Extracts Numerator and Denominator of fraction 'F'

	//instructions for performing the division of 2 fractions
	Num = Num *  D;            //Determining the Numerator
	Denom = N * Denom;         //Determining the Denominator
}

//Setting valid values for Numerator and Denominator
void Fraction::setNumDenom(int Numerator, int Denominator)
{

	if (Denominator != 0)//Validates denominator
	{
		Num = Numerator;
		Denom = Denominator;
	}
	else
	{
		cout << "Cannot divide by Zero!!!!!!" << endl;
		cout << "Re-enter 'THE ENTIRE' fraction: ";
		cin >> Numerator >> Denominator;    //Re-entering values for fraction
		cout << endl;
	}
}

//Reading the numerator and numerator by passing them by reference
void Fraction::getNumDenom(int &Numerator, int &Denominator)
{
	Numerator = Num;
	Denominator = Denom;
}

//Printing the fraction
void Fraction::print()
{
	int PNumerator, PDenominator, WholeN;//Declarations

	WholeN = Num / Denom;    //Whole Number in mixed form
	PNumerator = Num % Denom;//printed numerator
	PDenominator = Denom;    //printed denominator

	//printing the Fraction in mixed  form
	if (WholeN != 0)
		cout << WholeN ;
	if (PNumerator != 0)
		cout << "<" << PNumerator << "/" << PDenominator << ">";
}

Fraction::~Fraction()
{

}

int main()
{
	Fraction Fraction1, Fraction2, Fraction3, Fraction4;

	Fraction1.setNumDenom(3, 9);
	Fraction2.setNumDenom(7, 12);
	Fraction1.add(Fraction2);
	Fraction1.print();
	cout << endl;
	return 0;
}