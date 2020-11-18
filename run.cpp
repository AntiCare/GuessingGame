#include <random>
#include <iostream>
#include <ctime>

//
// Created by cy474 on 2020/11/17.
//
void run () {
    int x;
    int counter =0;
    // Initialize our mersenne twister with a random seed based on the clock
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
    // Create a reusable random number generator
    std::uniform_int_distribution<> generator(1, 100);
    std:: cout <<"Let's play a game. I'm thinking of a number.\n"
                 "You have 7 tries to guess what it is.\n";
    const int num=generator(mersenne);
    for(;;){
        counter++;
        std:: cout <<"Guess #"<<counter<<": ";
        std:: cin>>x;
        if(std:: cin.fail()){
            std:: cout <<"Please enter int! \n ";
            std::cin.clear();
            std::cin.sync();
            counter--;
        } else
        if (x==num) {
            std:: cout <<"Correct! You win!\n";
            break;
        } else if (counter == 7) {
            std:: cout <<"Sorry, you lose. The correct number was "<<num<<" .\n";
            break;
        } else if(x> num) {
            std:: cout <<" Your guess is too high.\n";
        } else if (x<num){
            std:: cout <<"Your guess is too low.\n";
        }
    }
}