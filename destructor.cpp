#include <iostream>

class MyClass {
public:

    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass myObject;

    return 0;
}
