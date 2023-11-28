#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        // Uncomment one of the following lines at a time to test different scenarios
        // throw 42;             // Throws an int
        // throw 3.14f;          // Throws a float
        // throw 'a';            // Throws a char
        // throw std::logic_error("Custom exception");  // Throws a custom exception
        throw logic_error("custom");

    } catch (int x) {
        std::cerr << "Caught an int exception: " << x << std::endl;

    } catch (float y) {
        std::cerr << "Caught a float exception: " << y << std::endl;

    } catch (const char* z) {
        std::cerr << "Caught a char exception: " << z << std::endl;

    } catch (...) {
        std::cerr << "Caught an unknown exception" << std::endl;
    }

    return 0;
}
