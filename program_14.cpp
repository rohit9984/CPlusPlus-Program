#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string data;
    ofstream outFile("example.txt");
    if (!outFile) {
        cout << "Error: Could not open file for writing." << endl;
        return 1;
    }
    cout << "Enter some text to write to the file: ";
    getline(cin, data);
    outFile << data;
    outFile.close();
    cout << "Data written successfully to 'example.txt'.\n\n";
    ifstream inFile("example.txt");
    if (!inFile) {
        cout << "Error: Could not open file for reading." << endl;
        return 1;
    }
    cout << "Reading data from 'example.txt':\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    cout << "\nFile operations completed successfully!" << endl;
    return 0;
}
