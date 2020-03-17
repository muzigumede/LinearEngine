#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > makeMatrix(vector<string> equations);
void printer(vector<string> equations);

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


vector<vector<int> > makeMatrix(vector<string> equations){
        //code for creating a 2d integer matrix from a 1d string vector.
        vector<vector<int> > placeholder;
        return placeholder;
}

void printer(vector<string> equations){
        for(int i=0;i<equations.size();i++){
                cout << equations[i] << endl;
        }
}

