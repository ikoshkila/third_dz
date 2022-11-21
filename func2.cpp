#include "ezstr.h"

std::string itc_cmp_str(std::string str1, std::string str2, int num){
    std::string out;
    long long len2 = itc_len(str2);
    if(num > len2-1){
        return str1;
    }
    long long j = 0;
    long long i = 0;
    while(i < itc_len(str1)){
        if(i < num){
            out += str1[i];
            i++;
        }
        if(i >= num && j < len2){
            out += str2[j];
            j++;
        
        }
        if(j >= len2){
            out += str1[i];
            i++;
        }
    }
    return out;
}

int itc_find_str(std::string str1, std::string str2){
    int out;
    bool istrue = 1;
    for(long long i = 0; i < itc_len(str1); i++){
        if(str1[i] == str2[0]){
            for(long long j = 0; j < itc_len(str2); j++){
                if(str1[i+j] != str2[j]){
                    istrue = 0;
                    break;
                }
            }
            if(istrue){
                return (int)i;
            }
            istrue = 1;
        }
    }
    return -1;
}

std::string itc_three_str(std::string str1, std::string str2, std::string str3){
    if(str2 == str3){
        return str1;
    }
    int c;
    while(itc_find_str(str1, str2) != -1){
        std::string a, b;
        c = itc_find_str(str1,str2);
        for(int i = 0; i < c; i++){
            a += str1[i];
        }
        for(int i = c + itc_len(str2); str1[i] != '\0'; i++){
            b += str1[i];
        }
        str1 = a + str3 + b;
    }
    return str1;
}

int itc_max_char_on_end(std::string str){
    int c = 0;
    int maxc = -1;
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] <= '9' && str[i] >= '0'){
            c++;
        }
        else{
            if(c > maxc){
                maxc = c;
            }
            c = 0;
        }
    }
    if(c > maxc){
        maxc = c;
    }
    return maxc;
}