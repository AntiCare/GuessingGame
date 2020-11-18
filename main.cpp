#include <iostream>
#include <random>


void run();
int main() {
    std::string playAgain;
        run();
    for(;;) {
        std:: cout <<"Would you like to play again (y/n)? ";
        std::cin>> playAgain;
        if(playAgain=="y") {
            run();
        } else if(playAgain=="n") {
            std:: cout <<"Thank you for playing.";
            break;
        }
    }
    return 0;
}








