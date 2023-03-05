#include <iostream>

using namespace std;

int main() {
    
    int total_amount;
    cout << "Enter total amount : ";
    cin >> total_amount;

    int note_100 = 0 , note_50 = 0 , note_20 = 0 , note_1 = 0;
    int ch = 1;
    if(total_amount < 0)
        ch = 5;
    switch(ch) {
        case 1:
            note_100 = total_amount / 100;
            total_amount -= 100 * note_100;

        case 2:
            note_50 = total_amount / 50;
            total_amount -= 50 * note_50;

        case 3:
            note_20 = total_amount / 20;
            total_amount -= 20 * note_20;

        case 4:
            note_1 = total_amount / 1;
            total_amount -= 1 * note_1;

        default:
            cout << "Enter a valid amount";
    }
    
    cout << "\nRequired Notes : \n";
    cout << "Note of 100 : " << note_100 << endl;
    cout << "Note of 50 : " << note_50 << endl;
    cout << "Note of 20 : " << note_20 << endl;
    cout << "Note of 1 : " << note_1 << endl;

    return 0;
}