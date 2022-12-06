#include "str_easy.h"


std::string itc_even_place(std::string str){
    long long len = itc_len(str);
    if(len < 2){
        return "-1";
    }
    std::string out;
    for(long long i = 1; i < len; i+=2){
        out += str[i];
    }
    return out;
}

double itc_percent_lower_uppercase(std::string str){
    double lcount = 0;
    double ucount = 0;
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] >= 97 && str[i] <= 122){
            lcount++;
        }
        if(str[i] >= 65 && str[i] <= 90){
            ucount++;
        }
    }
    return ucount / lcount * 100;
}

std::string itc_reverse_str(std::string str){
    std::string out;
    for(long long i = itc_len(str) - 1; i >= 0; i--){
        out += str[i];
    }
    return out;
}

std::string itc_slice_str(std::string str, int start, int end){
    long long len = itc_len(str);
    std::string out;
    if(start > end){
        return str;
    }
    if(start < 0){
        start = 0;
    }
    for(long long i = start; i <= end && i < len; i++){
        out += str[i];
    }
    return out;
}

bool itc_equal_reverse(std::string str){
    return str == itc_reverse_str(str);
}
