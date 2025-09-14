// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <cstring>
int main(){
    std::string name;
    std::cout << "enter your name:" << std::flush;
    std::cin>>name;
    std::cout<<" welcome to coding "<<name<<"!"<<std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}