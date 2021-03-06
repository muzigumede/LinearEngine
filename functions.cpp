//separate functions module
void capture(std::vector<std::string>* sysOfEqPtr){
         
        std::string equation;
        std::vector<std::string> sysOfEq;
  
        for(int i=0;i<10;i++){

                std::cout << "Enter equation " + std::to_string(i + 1) + " / click Enter 0 to terminate.\n";
                std::cin >> equation;
  
                if(equation != "0" && equation != ""){
                        (*sysOfEqPtr).push_back(equation);
                          
                } else if(equation == ""){
                        std::cout << "Please enter a valid equation\n";
                      
                } else{
                        break;
                }
        }
}
  
//to transform input form a system of equations to a matrix
std::vector<std::vector<int> > toMatrix(std::vector<std::string> equations){
        //code for creating a 2d integer matrix from a 1d string vector.
        std::vector<std::vector<int> > augMatrix(5, std::vector<int> (5,0));

        std::smatch matches;
        std::regex re("-+");

        bool status = std::regex_search(equations[0], matches, re);
        int size = matches.size();

        std::cout << status << size << "\n";

        return augMatrix;
}
  
void printer(std::vector<std::string> sysOfEq){

        for(int i=0;i<sysOfEq.size();i++){
                std::cout << sysOfEq[i] << "\n";
        }
}
