/*
    191
    Rational 1
    main
    pjirele, jkilloy
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Rational
{

    private:
        int num, den;

    public:
        //constructors
        Rational();
        Rational(int, int);

        //utility
        void load();
        void display();

        //setters / mutators
        void set(int, int);

        // getters / accessors
        int getDen();
        int getNum();
        

        //math
        void add(Rational);
        void sub(Rational);
        void mult(Rational);
        void div(Rational);
        double approx();   //- returns a double approximation to the random

}; // end rational

Rational::Rational()
{
    num = 0; den = 1;
}

Rational::Rational(int n, int d)
{
    num = n; den = d;
}

void Rational::load()
{
    cout << "Enter a numerator and a denometer: ";
    cin >> num >> den;
    cout << "The numerator is " << num << ", and the denometer is " << den << endl;
}

void Rational::display()
{
    cout << num << "/" << den << endl;
}

void Rational::set(int n, int d)
{
    num = n; den = d;
}

int Rational::getDen()
{
    return den;
}

int Rational::getNum()
{
    return num;
}

void Rational::add(Rational r)
{
    num = num * r.den + r.num * den;
    den = den * r.den;
    cout << num << "/" << den << endl;
}

void Rational::sub(Rational r)
{
    num = (num * r.den) - (r.num * den);
    den = den * r.den;
    cout << num << "/" << den << endl;
}

void Rational::mult(Rational r)
{
    num = num * r.num;
    den = den * r.den;
    cout << num << "/" << den << endl;
}

void Rational::div(Rational r)
{
    num = num * r.den;
    den = den * r.num;
    cout << num << "/" << den << endl;
}

double Rational::approx()
{
   return (double)num / den;
}

int main()
{
    Rational r1 = Rational();
    Rational r2 = Rational();
    Rational r3 = Rational(3, 8);
    Rational r4 = Rational(5, 9);
    Rational r5 = Rational(2, 9);
    Rational r6 = Rational(2, 7);
    Rational r7 = Rational(7, 2);
    Rational r8 = Rational(9, 14);
    Rational r9 = Rational(10, 12);
    Rational r10 = Rational(6, 7);

    r1.set(5, 6);
    r2.load();

    r1.display();
    r2.display();
 
    r3.add(r4);
    
    r5.sub(r6);
   
    r7.mult(r8);
   
    r9.div(r10);

    cout << "The num for r10 is: " << r10.getNum() << endl;
    cout << "The den for r10 is: " << r10.getDen() << endl;
    
    
    cout << fixed << endl;
    cout << "The approximation is: " << setprecision(2) << r1.approx() << endl;
    
}

