#include <iostream>
#include <vector>
using namespace std;


void printer(std::vector<string> equations){
        for(int i=0;i<equations.size();i++){
                cout << equations[i] << endl;
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



