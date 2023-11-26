#include "RobberLangFileProcessor.h"

int main(int argc, char const *argv[])
{
    RobberLangFileProcessor fp;
    fp.processFile("testIn.txt","testOut.html");
    return 0;
}
