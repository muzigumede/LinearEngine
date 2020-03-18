#include <iostream>
#include <vector>

std::vector<std::string> capture();
std::vector<std::vector<int> > toMatrix(std::vector<std::string> equations);
void printer(std::vector<std::string> equations);

int main(){
         
        std::vector<std::string> sysOfEq = capture();
        printer(equations);

        return 0;
}

std::vector<std::string> capture(){
        
        std::string equation;
        std::vector<string> sysOfEq;

        for(int i=0;i<10;i++){
                std::cout << "Enter equation " + to_string(i + 1) + " / click Enter 0 to terminate.\n";
                std::cin >> equation;

                if(equation != "0" && equation != ""){
                        sysOfEq.push_back(equation);
                        
                }else if(equation = ""){
                    std::cout << "Please enter a valid equation\n";
                    
                }else{
                        break;
                }
        }
        return sysOfEq;
}

std::vector<std::vector<int> > toMatrix(std::vector<std::string> equations){
        //code for creating a 2d integer matrix from a 1d string vector.
        std::vector<std::vector<int> > placeholder;
        return placeholder;
}

void printer(std::vector<std::string> equations){
        for(int i=0;i<equations.size();i++){
                std::cout << equations[i] << "\n";
        }
}

