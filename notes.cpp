#include<iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter Amount" << endl;
    cin >> amount;
    int num = 1;
    int notes = 0;
    switch (num){
        case 1 : notes = amount/100;
        amount = amount - ( 100 * notes);
        cout << notes << " Rs. 100 notes required" << endl;

        case 2 : notes = amount/50;
        amount = amount - ( 50 * notes);
        cout << notes << " Rs. 50 notes required" << endl;

        case 3 : notes = amount/20;
        amount = amount - ( 20 * notes);
        cout << notes << " Rs. 20 notes required" << endl; 

         case 4 : notes = amount/1;
        amount = amount - ( 1 * notes);
        cout << notes << " Rs. 1 notes required" << endl; 
    
    }
    return 0;
}