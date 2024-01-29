#include <iostream>
#include <string>


int main(){

while(true){
    std::cout << "lisp > ";
    std::string text;
    std::cin >> text ;
    std::cout << text + "\n";
}
return 0;
}