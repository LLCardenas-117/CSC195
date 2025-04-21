// SmartPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

int g = 10;

template<typename T>
struct smart_ptr {
    smart_ptr() = default;
    smart_ptr(T* p) {
        this->p = p;
    }
    ~smart_ptr() {
        delete p;
        std::cout << "Deleted" << std::endl;
    }

    T Dereference() { return *p; }
    T operator + () { return *p; }
    T* operator & () { return p; }

    T* p = nullptr;
};

int main()
{
    g = 23;
    int i = 5;
    int* p = &i;

    {
        smart_ptr<int> sptr{ new int(10) };
        std::cout << sptr.p << std::endl;
        std::cout << sptr.Dereference() << std::endl;
        std::cout << +sptr << std::endl;
        std::cout << &sptr << std::endl;

        smart_ptr<float> sptr1{ new float(10.5f) };
        std::cout << sptr1.p << std::endl;
    }

    std::unique_ptr<int> uptr = std::make_unique<int>(10);
    std::cout << uptr << std::endl;
    
    std::shared_ptr<int> sharedptr = std::make_shared<int>(34);
    std::shared_ptr<int> sharedptr2 = sharedptr;
}