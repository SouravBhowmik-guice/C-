// ...existing code...
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> s = {"I", "V", "X", "L", "C", "D", "M"};
    for (const auto& str : s) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}
// ...existing code...