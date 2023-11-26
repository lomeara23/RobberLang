#include "Model.h"


// Default constructor & destructor
Model::Model(){
}
Model::~Model(){
}

// Translate a single consonant, by seperating two of that consonant with an 'O'
string Model::translateSingleConsonant(char input){
    string s(3,input);
    s[1]='o';
    return s;
}

// Vowels are to be left alone, so translating a vowel simply returns it as a string
string Model::translateSingleVowel(char input){
    string s(1,input);
    return s;
}