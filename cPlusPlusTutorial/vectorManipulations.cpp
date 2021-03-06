//
//  vector.cpp
//  helloWorld
//
//  Created by Jolugbo on 8/23/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//uses LIFO
class VectorManipulation{
    vector<int> *vecDynamic; //dynamic vector declaration
    vector<int> vecStatic;//static vector declaration
    
public:
    VectorManipulation(){
        vecStatic.push_back(20);
        vecStatic.push_back(10);
        vecStatic.push_back(30);
        vecStatic.push_back(50);
        //accessing vector data by position reference
        cout<<vecStatic[0]<<endl;
        cout<<vecStatic[01]<<endl;
        cout<<vecStatic[5]<<endl;
        vecStatic[5] = 43;
        cout<<vecStatic[5]<<endl;
        //can also read vector using at
        cout<<"can also read vector using at"<<endl;
        cout<<vecStatic.at(2)<<endl;
        //sorting a vector
        sort(vecStatic.begin(),vecStatic.end());
        //iterating through the values of a vector
        for (int i =0 ; i < vecStatic.size(); i++) {
            cout<<"ite "<<i<<" "<< vecStatic.at(i)<<endl;
        }
        //using pop_back to remove the last element
        vecStatic.pop_back();
        for (int i =0 ; i < vecStatic.size(); i++) {
            cout<<"ite "<<i<<" "<< vecStatic.at(i)<<endl;
        }
        
        //initialising vectors with constant size and placeholder values
        vector<int> vecs(10,-2);
        for (int i =0 ; i < vecs.size(); i++) {
            cout<< vecs.at(i)<<" ";
        }
    }

    int calc(vector<string> ops) {
        int* arr = new int(ops.size());
        int pos = 0;
        int sum = 0;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "+") {
                arr[pos++] = arr[pos - 1] + arr[pos - 2];
            }
            else if (ops[i] == "D")
            {
                arr[pos++] = 2 * arr[pos - 1];
            }
            else if (ops[i] == "C")
            {
                arr[pos - 1] = 0;
                pos--;
            }
            else
            {
                arr[pos] = std::atoi(ops[i].c_str());
            }
        }
        for (int i = 0; i <= pos; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
