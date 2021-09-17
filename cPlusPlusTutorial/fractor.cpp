//
//  fractor.cpp
//  helloWorld
//
//  Created by Jolugbo on 8/17/21.
//
#include<iostream>
using namespace std;
class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const{//constant function
        return numerator;
    }
    void print(){
        cout<<numerator<<" / "<< denominator<<"\n";
    }
    //in place addition
    void add(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm/f2.denominator;
        int num = x * this->numerator + y * f2.numerator;
        this->numerator = num;
        this->denominator = lcm;
    }
    //operator overloading
    Fraction operator+(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm/f2.denominator;
        int num = x * this->numerator + y * f2.numerator;
        Fraction f3(num,lcm);
        f3.simplify();
        return f3;
    }
    Fraction operator*(Fraction const &f2){
        Fraction f3(numerator * f2.numerator,denominator * f2.denominator);
        f3.simplify();
        return f3;
    }
    Fraction& operator++(){
        numerator= numerator + denominator;
        simplify();
        return *this;
    }
    void multiply(Fraction const &f3){
        numerator = numerator * f3.numerator;
        denominator = denominator * f3.denominator;
        simplify();
        print();
    }
    void simplify(){
        int gcd = 1;
        int j = min(numerator,denominator);
        for (int i = 1; i <= j; i++) {
            if(numerator%i == 0 && denominator%i == 0){
                gcd = i;
            }
        }
        numerator = numerator /gcd;
        denominator = denominator /gcd;
    }
};
