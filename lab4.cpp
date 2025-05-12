#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;

    int alphabets = 0, specialChar = 0, digits = 0, words = 0;

    cout<<"Enter a string: ";
    getline(cin, input);

    bool inWord = false;

    for(char ch: input){
        if(isalpha(ch)){
            alphabets++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (!isspace(ch))
        {
            specialChar++;
        }
        if (!isspace(ch) && !inWord)
        {
            words++;
            inWord = true;
        }
        else if (isspace(ch))
        {
            inWord = false;
        }
        
        
        
    }
    cout<<"Results:\n";
    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special Charater: "<<specialChar<<endl;
    cout<<"Words: "<<words<<endl;

    return 0;
}

