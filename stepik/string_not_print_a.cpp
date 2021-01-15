#include <iostream>
// fdkhfds   fsdhkfds ffdfs -> fdkhfds fsdhkfds ffdfs
int main(){
   char c;
    bool prev_not_space = true;
    while(std::cin.get(c)) 
        if(c != ' '){
            std::cout << c;
            prev_not_space = true;
        }else if(prev_not_space) {
            std::cout << c;
            prev_not_space = false;
        }
    //system("pause");
    return 0;
}