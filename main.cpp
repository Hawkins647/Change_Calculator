#include <iostream>

using namespace std;

int main()
{
	int num_pence {};
    int num_pounds {};
    int num_fifty_pence {};
    int num_twenty_pence {};
    int num_ten_pence {};
    int num_five_pence {};
    int num_two_pence {};
    
    cout << "Please enter an amount in pennies: ";
    cin >> num_pence;
    
    num_pounds = num_pence / 100;
    num_pence -= num_pounds * 100;
    
    num_fifty_pence = num_pence / 50;
    num_pence -= num_fifty_pence * 50;
    
    num_twenty_pence = num_pence / 20;
    num_pence -= num_twenty_pence * 20;
    
    num_ten_pence = num_pence / 10;
    num_pence -= num_ten_pence * 10;
    
    num_five_pence = num_pence / 5;
    num_pence -= num_five_pence * 5;
    
    num_two_pence = num_pence / 2;
    num_pence -= num_two_pence * 2;
    
    cout << "Pounds: " << num_pounds << endl;
    cout << "50ps: " << num_fifty_pence << endl;
    cout << "20ps: " << num_twenty_pence << endl;
    cout << "10ps: " << num_ten_pence << endl;
    cout << "5ps: " << num_five_pence << endl;
    cout << "2ps: " << num_two_pence << endl;
    cout << "Pennies: " << num_pence << endl;
    
	return 0;
}
