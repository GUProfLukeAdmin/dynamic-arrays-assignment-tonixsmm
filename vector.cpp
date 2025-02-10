#include <iostream>
#include <vector>

using namespace std;

void part1() {
    // creating an empty vector
    vector<int> v;

    // adding 50k integers
    for (int i = 0; i < 50000; i++) {
        v.push_back(i);
    }
    cout << "After adding elements: Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

    // removing a half of the elements
    v.resize(v.size() / 2);
    cout << "After resizing: Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

    // shrinking the vector
    v.shrink_to_fit();
    cout << "After shrink_to_fit(): Size = " << v.size() << ", Capacity = " << v.capacity() << endl;

}

void part2() {
    // creating vectors
    vector<bool> v1(10000, 0);
    vector<char> v2(10000, 0);

    // printing sizes
    cout << "Memory usage of std::vector<bool>: " << sizeof(v1) << " bytes" << endl;
    cout << "Memory usage of std::vector<char>: " << sizeof(v2) << " bytes" << endl;
}

int main() {
    cout << "Part 1:" << endl << "----------------" << endl;
    part1();
    cout << endl << "Part 2:" << endl << "----------------" << endl;
    part2();
    return 0;
}