#include<iostream>
#include<string>
#include"template.h"

template<class T,class U>
Person<T,U>::Person(T name,U age):_name(name),_age(age){};

template<class T,class U>
void Person<T,U>::showInfo(){
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Age:  " << _age << std::endl;

};
