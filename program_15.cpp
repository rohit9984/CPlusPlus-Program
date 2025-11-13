#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;
int main() {
    string filename = "data.txt";
    string content;
    try {
        ofstream outFile;
        outFile.exceptions(ofstream::failbit | ofstream::badbit);
        cout << "Opening file for writing..." << endl;
        outFile.open(filename);  // Try to open file
        cout << "Enter text to write into the file: ";
        getline(cin, content);
        outFile << content;  // Write data to file
        outFile.close();
        cout << "Data written successfully to '" << filename << "'.\n\n";
    }
    catch (const ofstream::failure &e) {
        cerr << "Error writing to file: " << e.what() << endl;
        return 1;
    }
    try {
        ifstream inFile;
        inFile.exceptions(ifstream::failbit | ifstream::badbit);
        cout << "Opening file for reading..." << endl;
        inFile.open(filename);
        string line;
        cout << "Reading data from file:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
        cout << "\nFile read successfully.\n";
    }
    catch (const ifstream::failure &e) {
        cerr << "Error reading from file: " << e.what() << endl;
        return 1;
    }
    ifstream checkFile(filename);
    if (!checkFile.is_open()) {
        cerr << "\nError Code: File could not be opened manually.\n";
    } else {
        cout << "\nFile exists and opened successfully (checked manually).\n";
        checkFile.close();
    }
    return 0;
}
