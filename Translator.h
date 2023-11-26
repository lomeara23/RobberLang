#include <iostream>
#include "model.h"

using namespace std;

class Translator
{
public:
    Translator();
    ~Translator();
    string translateEnglishWord(string input);
    string translateEnglishSentence(string input);
private:
    Model model;
};