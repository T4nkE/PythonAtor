#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

int main(){
    float x;
    float y;
    float result;
    string operatorSym;
    

    cout << "Input First Number:";
    cin >> x;

    cout << "Input Operator:";
    cin >> operatorSym;

    cout << "Input Second Number:";
    cin >> y;

    if (operatorSym == "-"){
        result = x - y;
    }
    if (operatorSym == "+"){
        result = x + y;
    }
    if (operatorSym == "*"){
        result = x * y;
    }
    if (operatorSym == "/"){
        if (y != 0){
            result = x / y;
        }

    }
    std::string resultString = std::to_string(result);
    std::string answer = "Result:" + resultString ;
    std::cout << answer << std::endl;
    return 0;
}