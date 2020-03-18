#include <iostream>
#include <vector>
//using namespace std;

std::vector<std::vector<int> > makeMatrix(std::vector<std::string> equations);
void printer(std::vector<std::string> equations);

int main(){
        std::vector<string> equations;
        std::string equation;

        for(int i=0;i<10;i++){
                std::cout << "Enter equation " + to_string(i + 1) + " / click Enter 0 to complete.\n";
                std::cin >> equation;
                if(equation != "0"){
                        equations.push_back(equation);
                }else{
                        break;
                }
        }
        
        printer(equations);

        return 0;
}


std::vector<std::vector<int> > makeMatrix(std::vector<std::string> equations){
        //code for creating a 2d integer matrix from a 1d string vector.
        std::vector<std::vector<int> > placeholder;
        return placeholder;
}

void printer(std::vector<std::string> equations){
        for(int i=0;i<equations.size();i++){
                std::cout << equations[i] << "\n";
        }
}

