// Section 6
// Challenge 

/*
 * Frank's Carpet Cleaning Service
 * Charges:
 *  Charges $25 per small room
 *  Charges $35 per large room
 * Sales tax rate is 6%
 * Estimate are valid for 30 days
 * 
 * Prompt the user for the number of small rooms and large rooms they would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price for small room: $25
 * Price for large room: $35
 * Cost: $110
 * Tax: $6.6
 * ========================================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */
 
 #include <iostream>

using namespace std;

int main() {
    
    cout << "\nHello, welcome to Frank's Carpet Cleaning Service" << endl;
    
    cout << "\nHow many small rooms would you like cleaned? ";
    int small_rooms{0};
    cin >> small_rooms;
    
    cout << "\nHow many large rooms would you like cleaned? ";
    int large_rooms{0};
    cin >> large_rooms;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price for small room: $" << price_per_small_room << endl;
    cout << "Price for large room: $" << price_per_large_room << endl;
    
    cout << "Cost: $" << (price_per_small_room * small_rooms) + 
    (price_per_large_room * large_rooms) 
    << endl;
    
    cout << "Tax: $" << ((price_per_small_room * small_rooms) + 
    (price_per_large_room * large_rooms))* sales_tax 
    << endl;
    
    cout << "========================================" << endl;
    cout << "Total estimate: $" << ((price_per_large_room * large_rooms) + 
    (price_per_small_room * small_rooms)) + (((price_per_large_room * large_rooms) + 
    (price_per_small_room * small_rooms)) * sales_tax)  
    << endl;
    
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}