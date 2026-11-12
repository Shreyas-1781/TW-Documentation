
/**
 * @file example.cpp
 * @brief Demonstration of Doxygen documentation.
 * @author Student
 * @version 1.0
 */

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function.
 * @return 0 if the program executes successfully.
 */
int main() {
    int result = add(10, 20);
    cout << "Sum = " << result << endl;
    return 0;
}
