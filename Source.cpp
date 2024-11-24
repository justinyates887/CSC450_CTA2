#include <iostream>
#include <string>

using namespace std;

int main() {
    string input1, input2, result;

    for (int i = 0; i < 3; i++) {
        cout << "Enter dental taxonomy: ";
        getline(cin, input1);
        cout << "Enter provider NPI: ";
        getline(cin, input2);
        result = "Taxonomy: " + input1 + " NPI: " + input2;
        cout << result << endl;
    }

    return 0;
}