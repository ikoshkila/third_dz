#include "str_easy.h"


std::string itc_hello_str(std::string name){
    return "Hello, " + name;
}

long long itc_len(std::string str){
    long long c = 0;
    for(int i = 0; str[i] != '\0'; i++){
        c++;
    }
    return c;
}

void itc_print_copy_str(std::string str, int number){
    for(int i = 0; i < number; i++){
        std::cout << str;
    }
}

void itc_first_end_three(std::string str){
    long long len = itc_len(str);
    if(len <= 5){
        for(int i = 0; i < len; i++){
            std::cout << str[0];
        }
    }else{
        std::cout << str[0] << str[1] << str[2] << str[len-3] << str[len-2] << str[len-1];
    }
}

int itc_count_char_in_str(char ch, std::string str){
    int c = 0;
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] == ch){
            c++;
        }
    }
    return c;
}
