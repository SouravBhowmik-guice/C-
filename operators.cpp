#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 15, b = 4;
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl; // 19
    cout << "a - b = " << (a - b) << endl; // 11
    cout << "a * b = " << (a * b) << endl; // 60
    cout << "a / b = " << (a / b) << endl; // 3 (integer division)
    cout << "a % b = " << (a % b) << endl; // 3 (modulus - remainder)

    // Assignment/compound Operators
    int x = 10;
    cout << "\nAssignment Operators:" << endl;
    cout << "Initial x = " << x << endl;
    x += 5;  // x = x + 5
    cout << "After x += 5, x = " << x << endl;
    x *= 2;  // x = x * 2
    cout << "After x *= 2, x = " << x << endl;
    x /= 4; // x = x / 4
    cout << "After x /=4, x =" <<x <<endl;
    x %= 3; // x = x % 3
    cout << "After x %=3, x =" <<x <<endl;

    // Comparison Operators
    cout << "\nComparison Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;    // 0 (false)
    cout << "a != b: " << (a != b) << endl;    // 1 (true)
    cout << "a > b: " << (a > b) << endl;      // 1 (true)
    cout << "a < b: " << (a < b) << endl;      // 0 (false)
    cout << "a >= b: " << (a >= b) << endl;    // 1 (true)
    cout << "a <= b: " << (a <= b) << endl;    // 0 (false)
    //operators precedence: 
    string url="https://www.cppreference.com/w/cpp/language/operator_precedence.html";
    cout<<"Visit this link to know about operator precedence: "<<url<<endl;
    //url link up in c++

    int px {10}, qx {20}, rx {30}, sx {40}, tx {50};
    int result = px + qx * rx - sx / tx; // multiplication and division have higher precedence than addition and subtraction
    //qx*rx, sx/tx, px+(qx*rx), (px+qx*rx)-(sx/tx)

    cout << "Result = " << result << endl;
    // action sequence: first qx*rx, then sx/tx, then px + (qx*rx), finally (px + qx*rx) - (sx/tx)
    // parentheses can be used to change precedence
    int result2 = (px + qx) * (rx - sx) / tx; // parentheses
    //px+qx, rx-sx, (px+qx)*(rx-sx), ((px+qx)*(rx-sx))/tx
    cout<<"Result2 = "<< result2 << endl;

    // Logical Operators
    bool val1 = true, val2 = false;
    cout << "\nLogical Operators:" << endl;
    cout << "val1 && val2: " << (val1 && val2) << endl;  // 0 (false)
    cout << "val1 || val2: " << (val1 || val2) << endl;  // 1 (true)
    cout << "!val1: " << (!val1) << endl;               // 0 (false)

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    int p = 6, q = 10; // p=0110, q=1010 binary
    cout << "p & q = " << (p & q) << endl;  // 2 (0010 binary)
    cout << "p | q = " << (p | q) << endl;  // 14(1110 binary)
    cout << "p ^ q = " << (p ^ q) << endl;  // 12(1100 binary)
    cout << "~p = " << (~p) << endl;         // bitwise NOT
    cout << "p << 1 = " << (p << 1) << endl; // 12 (shift left)
    cout << "q >> 1 = " << (q >> 1) << endl; // 5 (shift right)

    // Increment and Decrement Operators
    int z = 5;
    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "z = " << z << endl;
    cout << "z++ = " << z++ << endl; // prints 5, then z=6
    cout << "++z = " << ++z << endl; // increments to 7 then prints 7
    cout << "z-- = " << z-- << endl; // prints 7 then decrements z to 6
    cout << "--z = " << --z << endl; // decrements to 5 then prints 5

    // Conditional (Ternary) Operator
    int max = (a > b) ? a : b;
    cout << "\nConditional (Ternary) Operator:" << endl;
    cout << "Max of a and b = " << max << endl;

    // Comma Operator
    int c;
    cout << "\nComma Operator:" << endl;
    c = (a++, b++, a + b); // evaluates all, returns last expression a+b
    cout << "Result of (a++, b++, a + b): " << c << endl;

    // Pointer Operators
    int var = 25;
    int* ptr = &var;         // & operator gives address of var
    cout << "\nPointer Operators:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;  // dereference *
    

    return 0;
}
