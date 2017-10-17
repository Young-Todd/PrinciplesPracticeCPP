#include <iostream>
using namespace std;

int main() {
    /*
     * Convert between meters and feet upon request.
     */
    constexpr double ft_per_meter = 3.28084;
    double length = 1;
    char unit = 'a';

    cout << "Please enter a length followed by a unit (meters=m or feet=f):\n";
    cin >> length >> unit;

    switch(unit){
        case 'm':
            cout << length << " meters == " << ft_per_meter*length << " feet.\n";
            break;
        case 'f':
            cout << length << " feet == " << length/ft_per_meter << " meters.\n";
            break;
        default:
            cout << "Sorry, I don't know a unit called " << unit << "\n";
            break;
    }
    return 0;
}