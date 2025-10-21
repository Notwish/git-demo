#ifndef TEMPLATE_H
#define TEMPLATE_H

template<class T, class U>
class Person{
private:
    T _name;
    U _age;
public:
    Person(T name,U age);
    void showInfo();
};
#include"template.tpp"
#endif