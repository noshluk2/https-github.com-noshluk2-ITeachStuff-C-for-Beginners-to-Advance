#include "welcome.h"
#include <time.h>
#include<iostream>


welcome::welcome(){
    std::cout<<"Welcome to the : \n"<<std::endl;
    std::cout<<"      /     /\      ------  -------               "<<std::endl;
    std::cout<<"     /     /  \     |       |        "<<std::endl;
    std::cout<<"    /     /----\    |----   -------           "<<std::endl;
    std::cout<<"    \    /      \   |       |        "<<std::endl;
    std::cout<<"     \  /        \  |       -------     \n"<<std::endl;

}
void welcome::set_time(){
    // setting entering time in hours while customers enter the cafe
    time_t t = time(NULL);
    struct tm *tmp = gmtime(&t);
    entering_time=tmp->tm_hour;

}
int welcome::get_time(){
    //returns the private varibles
    return welcome::entering_time;
}
welcome::welcome(int current_hours){
    if (6<=current_hours<12){
    std::cout<<"Good Morning !"<<std::endl;
    }else if (12<=current_hours<18){
    std::cout<<"Good Afternoon !"<<std::endl;
    }else if(18<=current_hours<21){
    std::cout<<"Good Evening !"<<std::endl;
    }else if(21<=current_hours<6){
    std::cout<<"Good Night !"<<std::endl;
    }

}

