#include <iostream>

using namespace std;

struct Fraction {
	int numerator;
	int denominator;
};

void reduce(Fraction& f)
{
	int i = f.denominator;
	for (i; i > 0; i--)
	{
		if (f.numerator % i == 0 && f.denominator % i == 0)
		{
			f.numerator /= i;
			f.denominator /= i;
		}
	}
}

void norma(Fraction f)
{
	int norm;
	if (f.numerator > f.denominator)
	{
		int norm = f.numerator / f.denominator;
		f.numerator /= f.denominator;
		cout << "NORMAL RESULT [ " << norm << " and " << f.numerator << " / " << f.denominator << " ]" << endl;
	}
}

Fraction multiply(Fraction f_1, Fraction f_2)
{
	Fraction result;
	result.numerator = f_1.numerator * f_2.numerator;
	result.denominator = f_1.denominator * f_2.denominator;
	
	return result;
}

Fraction divide(Fraction f_1, Fraction f_2)
{
	Fraction result;
	result.numerator = f_1.numerator * f_2.denominator;
	result.denominator = f_1.denominator * f_2.numerator;
	
	return result;
}

Fraction add(Fraction f_1, Fraction f_2)
{
	Fraction result;
	result.numerator = f_1.numerator * f_2.denominator + f_2.numerator * f_1.denominator;
	result.denominator = f_1.denominator * f_2.denominator;
	return result;
}

Fraction sub(Fraction f_1, Fraction f_2)
{
	Fraction result;
	result.numerator = f_1.numerator * f_2.denominator - f_2.numerator * f_1.denominator;
	result.denominator = f_1.denominator * f_2.denominator;
	return result;
}

void print_result(Fraction f)
{
	cout << "RESULT [ " << f.numerator << " / " << f.denominator << " ]" << endl;
}

int main() {
	int num1_num, num1_den, num2_num, num2_den;
	cout << "Enter 1 numerator -> ";
	cin >> num1_num;
	cout << "Enter 1 denominator -> ";
	cin >> num1_den;
	cout << "Enter 2 numerator -> ";
	cin >> num2_num;
	cout << "Enter 2 denominator -> ";
	cin >> num2_den;

	Fraction f_1 = { num1_num, num1_den };
	Fraction f_2 = { num2_num, num2_den };


	cout << "Multiply" << endl;
	Fraction mult = multiply(f_1, f_2);
	print_result(mult);
	reduce(mult);
	print_result(mult);
	norma(mult);
	cout << "******************" << endl;

	cout << "Divide" << endl;
	Fraction div = divide(f_1, f_2);
	print_result(div);
	reduce(div);
	print_result(div);
	norma(div);
	cout << "******************" << endl;

	cout << "Add" << endl;
	Fraction addd = add(f_1, f_2);
	print_result(addd);
	reduce(addd);
	print_result(addd);
	norma(addd);
	cout << "******************" << endl;

	cout << "Subtract" << endl;
	Fraction subb = sub(f_1, f_2);
	print_result(subb);
	reduce(subb);
	print_result(subb);
	norma(subb);
	cout << "******************" << endl;
}