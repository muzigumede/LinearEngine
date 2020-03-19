#include <iostream>
#include <vector>
#include <regex>
#include "functions.cpp"

void capture(std::vector<std::string>* sysOfEqPtr);
std::vector<std::vector<int> > toMatrix(std::vector<std::string> equations);
void printer(std::vector<std::string> equations);

int main(){
         
        std::vector<std::string> sysOfEq;
        capture(&sysOfEq);
        std::vector<std::vector<int> > matrix = toMatrix(sysOfEq);
        std::cout << matrix[0][0];

        printer(sysOfEq);

        return 0;
};
