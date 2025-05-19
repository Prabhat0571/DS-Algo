#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main() {
    
    vector<int> numbers = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

   
    int target = 11;
    bool found = binary_search(numbers.begin(), numbers.end(), target);

    
    if (found) {
        cout << "The number " << target << " is found in the vector." << endl;
    } else {
        cout << "The number " << target << " is not found in the vector." << ::endl;
    }

    return 0;
}
