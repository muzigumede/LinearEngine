#include <iostream>
#include <vector>
using namespace std;


void printer(std::vector<string> x){
        for(int i=0;i<x.size();i++){
                cout << x[i] << endl;
        }
}

int main(){
        vector<string> equations;
        string equation;

        for(int i=0;i<10;i++){
                cout << "Enter equation " + to_string(i + 1) + " / click Enter 0 to complete." << endl;
                cin >> equation;
                if(equation != "0"){
                        equations.push_back(equation);
                }else{
                        break;
                }
        }
        
        printer(equations);

        return 0;
}



