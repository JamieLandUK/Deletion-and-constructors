#pragma once

class C : public B {
    // Class C extends B which extends A.

    // Destructor
    ~C() {
        std::cout << "C destructor" << std::endl;
    }
};