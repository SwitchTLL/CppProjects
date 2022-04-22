// Arrays
// C++ treats an array name as "THE LOACATION OF FIRST ARRAY ELEMENT"
// All array elements must be "OF THE SAME TYPE"
// If requested array element that is out of range "IT WILL DISPLAY GARBAGE DATA"

#include <iostream>

using namespace std;

int main(){

    char vowels[] {'a', 'e', 'i', 'o', 'u' };
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
//    cin >> vowels[5];

    double hi_temps [] {90.1, 89.8, 77.5, 81.6}; //initialyzed array with all 5 indexes
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;    // set ther first element in hi_temps to 100.7
                            // we'll talk about assignment statement in an upcoming section
                            
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    
//    int test_scores [5]; //non-initialized array
    int test_scores [5] {100, 90, 80, 70 ,60}; //initialized array. Initializing arrays IS A MUST!
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nNotice what the value of the array name is: " << test_scores << endl; // outputs the array #HEX location in memory
    
//    // Multi-dimensional arrays. Example of 2D array: //can have as many dimensions as you want.
//    
//    const int rows {3}; //initializing
//    const int cols {4};
//    int movie_rating [3][4]; //[rows][cols]
//    {
//        { 0, 4, 3, 5},
//        { 2, 3, 3, 5}, //2D array data
//        { 1, 4, 4, 5}
//    };
//    
//    cin >> movie_rating [1][2]; //accessing 2D array
//    cout << movie_rating [1][2];
//    
    
    cout << endl;
    return 0;
}