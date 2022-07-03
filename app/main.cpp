#include "myopencvfunc/readimg.hpp"
#include<iostream>

int main(){
    std::string a= "../data/lena.jpg";
    readImg(a);
    std::cout<<"DONE";
    return 0;
}
