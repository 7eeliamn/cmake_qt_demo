#ifndef ADD_HPP
#define ADD_HPP

class add {
public:
    add(){
        // std::cout << "add class constructor" << std::endl;
    };
    ~add(){
        // std::cout << "add class destructor" << std::endl;
    };
    int add_two_numbers(int a, int b){
        return a + b;
    };
};

#endif