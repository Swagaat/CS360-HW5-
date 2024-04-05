#include <iostream>

class Example {
public:
    Example(int y = 10) : data(y) { ++count; }
    ~Example() { --count; }

    int getIncrementedData() { return data++; } // Changed to post-increment operator
    static int getCount() { std::cout << "Count is " << count << std::endl; return count; }

private:
    int data;
    static int count;
};

int Example::count = 0;

int main() {
    Example ex;
    int originalValue = ex.getIncrementedData(); // Get the original value
    int incrementedValue = originalValue + 1; // Increment the original value

    std::cout << "Original value of data: " << originalValue << std::endl;
    std::cout << "Incremented value of data: " << incrementedValue << std::endl;

    Example::getCount();
    return 0;
}
