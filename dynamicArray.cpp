//
//  dynamicArray.cpp
//  helloWorld
//
//  Created by Jolugbo on 8/22/21.
//

#include "dynamicArray.hpp"
#include <iostream>
using namespace std;

class DynamicArray{
    int nextIndex;
    int *data;
    int capacity;
    public :
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &arr){
        nextIndex = arr.nextIndex;
        capacity = arr.capacity;
        data = new int[capacity];
        for (int i =0; i < capacity; i++) {
            data[i] = arr.data[i];
        }
    }
    
    void operator=(DynamicArray const &arr){
        nextIndex = arr.nextIndex;
        capacity = arr.capacity;
        data = new int[capacity];
        for (int i =0; i < capacity; i++) {
            data[i] = arr.data[i];
        }
    }
    
    void add(int element){
        if(nextIndex == capacity){
            int *tempHolder = new int[capacity * 2];
            for (int i = 0; i < nextIndex; i++) {
                tempHolder[i] = data[i];
            }
            delete []data;
            data = tempHolder;
            capacity*=2;
        }
        data[nextIndex++] = element;
        
    }
    void addAt(int element, int location){
        if(location == nextIndex){
            add(element);
        }
        else if(location >= 0 && location < nextIndex){
            data[location] = element;
        }
        else
            return;
    }
    int get(int index)const{
        if(index >= nextIndex && index >= 0){
            return -1;
        }
        return data[index];
    }
    int getCapacity() const{
        return capacity;
    }
    void print() const{
        for (int i = 0; i < nextIndex; i++) {
            cout<< data[i]<< " ";
        }
        cout<<endl;
    }
};
