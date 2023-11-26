#include "Translator.h"

// Default constructor & destructor
Translator::Translator(){
}
Translator::~Translator(){
}


string Translator::translateEnglishWord(string input){
    string s;
    for(int i = 0 ; i < input.length() ; i++){ // Iterate through the whole word, character by character
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || 
        input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || 
        input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || 
        input[i] == 'U'){ // Check for vowels
            s += input[i]; // Since vowels dont need to be translated, adds vowel to output string
        } else {
            s += model.translateSingleConsonant(input[i]); // Translates a consonant before appending it to output string
        }
    }
    return s;
}
string Translator::translateEnglishSentence(string input){
    string s;
    for(int i = 0 ; i < input.length() ; i++){ // Iterate through sentence character by charcter
        if((input[i] > 64 && input[i] < 91) || (input[i] > 96 && input[i] < 123)){ // Check if character is a letter
            if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || 
            input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || 
            input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || 
            input[i] == 'U'){ // Check for vowels
            s += input[i]; // Since vowels dont need to be translated, adds vowel to output string
        } else {
            s += model.translateSingleConsonant(input[i]); // Translates a consonant before appending it to output string
        }
        }
        else s += input[i]; // If not a letter, just append
    }
    return s;
}
