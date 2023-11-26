#include <iostream>
#include "Translator.h"
#include <fstream>

using namespace std;

class RobberLangFileProcessor
{
public:
    RobberLangFileProcessor();
    ~RobberLangFileProcessor();
    void processFile(string inFile, string outFile);
private:
    Translator tr;
};