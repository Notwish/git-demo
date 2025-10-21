#include<iostream>
#include<string>
#include"template.h"

int main(){
    Person<std::string, int> p1("Tim",19);
    p1.showInfo();


    return 0;
}