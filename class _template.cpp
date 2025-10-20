#include<iostream>

// Base class template
template<typename B>
class Base{
protected:
    B _b;
public:
    Base(B b): _b(b){};
    B getBase() const {
        return _b;
    }
};


// Derived class template
template<typename D>
class Derived:public Base<int>{
private:
    D _d;

public:
    Derived(int b,D d):Base<int>(b),_d(d){};

    D getDerived(){
        return _d;
    }

};


int main(){
    Base<int> base(0);
    std::cout << base.getBase() << std::endl;

    Derived<char> derived(12,'t');
    std::cout << derived.getDerived() << std::endl;
    std::cout << derived.getBase() << std::endl;

    return 0;
}