//
//  complexNumber.cpp
//  helloWorld
//
//  Created by Jolugbo on 8/19/21.
//

#include "complexNumber.hpp"
#include<iostream>
using namespace std;
class ComplexNumbers{
private:
    int real;
    int imaginary;
public:
    ComplexNumbers(int real, int imaginary){
        
    }
    
    void plus(ComplexNumbers const &C2){
        this->real = this->real + C2.real;
        this->imaginary = C2.imaginary + imaginary;
    }
};
