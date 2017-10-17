#include <iostream>
#include <vector>
using namespace std;


void for_vals(int maximum=5){
    for(int i=0; i<maximum+1; ++i){
        cout << i << '\t';
    }
}

void while_vals(int maximum=5){
    int i = 0;
    while(i < maximum+1){
        cout << i << '\t';
        i++;
    }
}

void range_vals(vector<int> values){
    for(const auto x : values){
        cout << x << '\t';
    } 
}

int main() {
    // Call the two void functions to iteratively print up to the maximum.
    cout << "\nPrinting using a for loop:\n";
    for_vals();
    cout << "\nPrinting using a while loop:\n";
    while_vals(10);
    cout << "\nNow using the range loop:\n";
    vector<int> *vec = new vector<int>(10);
    range_vals(*vec);

    return 0;
}
