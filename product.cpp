//
//  product.cpp
//  helloWorld
//
//  Created by Jolugbo on 7/28/21.
//

#include <iostream>
using namespace std;
class Product{
    int id;
    int const weight;
    char name[50];
    static int productCount;
public:
    Product(int mass): weight(mass){//initialisation list
        cout<<weight<<"\n";
        productCount++;
    }
    static int getProductCount(){
        return productCount;
    }
};

