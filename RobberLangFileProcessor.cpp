#include "RobberLangFileProcessor.h"

// Default constructor & destructor
RobberLangFileProcessor::RobberLangFileProcessor(){
}
RobberLangFileProcessor::~RobberLangFileProcessor(){
}

// Convert a text file to an HTML webpage with the original
// text in bold then the translated text italicized
void RobberLangFileProcessor::processFile(string inFile, string outFile){
    ifstream in;
    ofstream out;
    string line;

    in.open(inFile); // Open the file to read from
    out.open(outFile); // Open the file to write to

    // Write the HTML Boilerplate
    out << "<!DOCTYPE html>" << endl;
    out << "<html lang=\"en\">" << endl;
    out << "<head>" << endl;
    out <<  " <meta charset=\"UTF-8\">" << endl;
    out << "  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">" << endl;
    out << "  <link rel=\"stylesheet\" href=\"styles.css\">" << endl;
    out << "  <script src=\"script.js\" defer></script>" << endl;
    out << "</head>" << endl;

    out << "<body>" << endl;

    // Start the bolded "original text" paragraph
    out << "<p><b>" << endl;
    while(getline(in, line)){ // Iterate through the read file line by line
        out << line+"<br>" << endl; // Write each line, adding a linebreak to the end
    }
    out << "</b></p>" << endl; // Close the "original text" paragraph

    out << endl;

    in.clear(); // Reset the reader flags
    in.seekg(0); // Reset the reader position to the top of the file

    // Start the italicized "translated text" paragraph
    out << "<p><i>" << endl;
    while(getline(in, line)){ // Iterate through the read file line by line
        out << tr.translateEnglishSentence(line)+"<br>" << endl; // Translate each line
        // and write it to the HTML doc, adding a line break at the end
    }
    out << "</i></p>" << endl; // Close the "translated text" paragraph

    out << "</body>" << endl; // Close the body of the HTML doc

    in.close(); // Close the file reader
    out.close(); // Close the file writer
}