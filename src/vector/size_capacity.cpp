// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() 
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size() 
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}

/*
1. Vector size represents the number of components currently in the vector
 vector capacity represemts the maximum number of elements the vector can hold

2. The vector capacity doubles after its size==capacity. This isso that the vector can limit the number of memory allocations
    and copy operations required.

*/