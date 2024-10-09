/*Name:Urooj Baloch
ID:23K-0071*/
#include <iostream>
#include <cstring> // Prefer <cstring> for C++ style
using namespace std;

class ValidateString {
private:
    char* str; // String to validate

public:
    // Constructor accepting a const char*
    ValidateString(const char* sentence) {
        str = new char[strlen(sentence) + 1];
        strcpy(str, sentence);
    }

    // Destructor to free allocated memory
    ~ValidateString() {
        delete[] str;
    }

    // This function checks if the string contains only alphabetic characters
    // Marking this function as const ensures it does not modify the object state.
    void checkString() const {
        const char* ptr = str; // Use a local const pointer
        while (*ptr != '\0') {
            // Check if the character is not an alphabet character
            if (!(((*ptr) >= 'A' && (*ptr) <= 'Z') || ((*ptr) >= 'a' && (*ptr) <= 'z'))) {
                cout << "Invalid string: " << str << endl;
                return;
            }
            ptr++;
        }
        cout << "Valid string: " << str << endl; // Indicate valid string
    }
};

int main() {
    ValidateString string1("Hello this is urooj baloch");
    string1.checkString();

    ValidateString string2("Hello world");
    string2.checkString();

    ValidateString string3("Hellooo Fast 123");
    string3.checkString();

    return 0;
}
