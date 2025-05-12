#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

bool isOnlyA(char *str){
    return (strlen(str) == 1   && str[0] == 'a');
}

bool isAStarBPlusPlus(char *str){
    int i = 0;
    int len = strlen(str);

    while(i<len && str[i]=='a'){
        i++;
    }
    
    if(i == len || str[i] != 'b'){
        return false;
    }

    while(i<len && str[i] == 'b'){
        i++;
    }

    return i == len;
    
}

bool isExactlyABB(char *str){
    return (strcmp(str, "abb") == 0);
}

int main(){

}