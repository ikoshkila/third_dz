#include <iostream>
#include <string>

std::string itc_hello_str(std::string name){
    return "Hello," + name;
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

std::string itc_even_place(std::string str){
    std::string out;
    for(long long i = 1; i < itc_len(str); i+=2){
        out += str[i];
    }
    return out;
}

double itc_percent_lower_uppercase(std::string str){
    long long lcount = 0;
    long long ucount = 0;
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] >= 97 && str[i] <= 122){
            lcount++;
        }
        if(str[i] >= 65 && str[i] <= 90){
            ucount++;
        }
    }
    double out = (double)ucount / (double)lcount;
    return out;
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
    if(len-1 < start){
        return str;
    }
    if(end > len-1){
        end = len-1;
    }
    if(start > end){
        return str;
    }
    for(long long i = start; i <= end; i++){
        out += str[i];
    }
    return out;
}

bool itc_equal_reverse(std::string str){
    return str == itc_reverse_str(str);
}

std::string itc_cmp_str(std::string str1, std::string str2, int num){
    std::string out;
    long long len2 = itc_len(str2);
    if(num > len2-1){
        return str1;
    }
    for(long long i = 0; i < itc_len(str1); i++){
        if(i < num){
            out += str1[i];
        }
        if(i >= num && i < len2){
            out += str2[i];
        }
        if(i >= len2){
            out += str1[i];
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

int main(){
    std::string a, b;
    int c;
    std::cin >> a >> b;
    std::cout << itc_find_str(a, b);
}