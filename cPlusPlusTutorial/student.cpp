//
//  student.cpp
//  helloWorld
//
//  Created by Jolugbo on 7/28/21.
//

#include<iostream>
using namespace std;

class Student{
int rollNumber;
    char *name;
public: int age;
    Student(){
           cout<<"Constructor Called\n";
       }
    //deep copy
    Student(Student const &s1){
           cout<<"custom copy Constructor Called\n"<<s1.name;
        this->age = s1.age;
        this->name = new char[strlen(s1.name) + 1];
        strcpy_s(this->name, strlen(s1.name) + 1, s1.name);
       }
    
    Student(int age, int rollNumber){
        setRollNumber(rollNumber);
        this->rollNumber = rollNumber;
        cout<<"this is the new age "<<age<<"\n"<<"this is the new roll number "<<this->rollNumber<<"\n";
    }
    
    Student(int age, char *name){
        this->age = age;
            //shallow copy
        //this->name = name;
           // deep copy
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, sizeof this->name, name);
    }
    
public: void display(){
    cout<<age<<"\n";
    //cout<<rollNumber<<"\n";
    cout<<name<<"\n";
}
    ~Student(){
        cout<<"Destructor called\n";
    }
     void setRollNumber(int number){
        rollNumber = number;
    }
};
