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

    // adding elements
    for (int i = 0; i < 10000; i++) {
        v1[i] = true;
        v2[i] = 'a';
    }

    // printing sizes
    cout << "Memory usage of std::vector<bool>: " << v1.capacity() / 8 << " bytes" << endl;
    cout << "Memory usage of std::vector<char>: " << v2.capacity() * sizeof(char) << " bytes" << endl;
}

int main() {
    part1();
    part2();
    return 0;
}