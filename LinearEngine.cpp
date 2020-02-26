#include <iostream>
using namespace std;

void printer(string seq){
        cout << seq << endl;
}

int main(){
        string equation = "";
        cout << "Enter lineqr equation: " <<endl;
        cin >> equation;
        printer(equation);

        return 0;
}
