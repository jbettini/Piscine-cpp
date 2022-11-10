#include "Base.hpp"

Base::Base() {};

Base::~Base() {};

Base * generate(void) {
    int i = rand() % 3;
    std::cout << "Generating : ";
    if (i == 0)
        std::cout << "an A" << std::endl;
    else if (i == 1)
        std::cout << "an B" << std::endl;
    else if (i == 2)
        std::cout << "an C" << std::endl;

    switch (i) {
        case 0: return new A; break;
        case 1: return new B; break;
        case 2: return new C; break;
        default : return NULL;
    }
    return NULL;
}

void Base::identify(Base* p) {
    std::cout << "identify Base * Called" << std::endl;

    if (dynamic_cast<A * >(p))
        std::cout << "*p = A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "*p = B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "*p = C" << std::endl;
}

void Base::identify(Base& p) {
    std::cout << "identify Base & Called" << std::endl;

    Base &tmp = p;
    try { 
        tmp = dynamic_cast<A & >(p);
        std::cout << "*p = A" << std::endl;
    }
    catch (const std::exception &e) {
        try {
            tmp = dynamic_cast<B &>(p);
            std::cout << "*p = B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try {
                tmp = dynamic_cast<C &>(p);
                std::cout << "*p = C" << std::endl;
            }
            catch (const std::exception& e) {
                std::cout << e.what() << std::endl;
                exit(1);
            }
        }
        
    }
}