#include <iostream>
#include <fstream>
#include <string>

using namespace std;

size_t MaxConsecutiveSpacesInFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 0;
    }

    size_t maxSpaces = 0;
    size_t currentSpaces = 0;

    char c;
    while (file.get(c)) {
        if (c == ' ') {
            currentSpaces++;
        }
        else {
            if (currentSpaces > maxSpaces) {
                maxSpaces = currentSpaces;
            }
            currentSpaces = 0;
        }
    }

    file.close();

    if (currentSpaces > maxSpaces) {
        maxSpaces = currentSpaces;
    }

    return maxSpaces;
}

int main() {
    string filename;
    cout << "Enter the filename:" << endl;
    getline(cin, filename);
    cout << "Maximum consecutive spaces in the file: " << MaxConsecutiveSpacesInFile(filename) << endl;
    return 0;
}
