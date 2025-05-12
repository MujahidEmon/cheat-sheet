#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[100], b[100];
    int j = 0, len, k;

    // Input string from user until '~' is encountered
    cin.getline(a, 100, '~');

    len = strlen(a);

    for(k = 0; k <= len - 1; k++) {
        // Check for the comment "//"
        if(a[k] == '/' && a[k + 1] == '/') {
            k += 2; // Skip the "//"
            while(k <= len - 1) {
                if(a[k] == '\n') // End of comment
                    break;
                b[j++] = a[k++];
            }
        }
    }
    b[j] = '\0'; // Null-terminate the comment string

    // Output the extracted comment
    cout << "\nComment: " << b << endl;

    return 0;
}
