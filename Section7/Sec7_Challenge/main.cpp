/* Section 7 
  Challenge
  
  Write a C++ program as follows:
  
  Declare 2 empty vectors of integers named
  vector1 and vector2, respectivly.
  
  Add 10 and 20 to vector 1 dynamically using push_back
  Display the elements in vector1 using the at() method as well as its size using the size() method
   
  Add 100 and 200 to vector 2 dynamically using push_back
  Display the elements in vector2 using the at() method as well as its its size using size() method
  
  Declare an empty 2D vector called vector_2d
  Remember, tht a 2D vector is a vector of vector<int>
  
  Add vector1 to vector_2d dynamically using puch_back
  Add vector2 to vector_2d dynamically using puch_back
  
  Display the elements in vector_2d using the at() method
  
  Change vector_1.at(0) to 1000
  
  Display the elements in vector_2d again using the at() method
  
  Display elements in vector1
  
  What did you expect? Did you get what you expected? What do you think happended?
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    // 1st vector
    
    vector <int> vector1{};
        
    int add_vect1_1 {0};
    cout << "\nEnter 10" << endl;
    cin >> add_vect1_1;
    
    int add_vect1_2 {0};
    cout << "\nEnter 20" << endl;
    cin >> add_vect1_2;
    
// Dynamical addition (no user prompt) author solution
//    vector1.push_back(10);
//    vector1.push_back(20);   
    
    vector1.push_back(add_vect1_1);
    vector1.push_back(add_vect1_2);
    
    cout << "\nThere are " << vector1.size() << " numbers in vector1" << " and they are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl; 
    
    // 2nd vector
    
    vector <int> vector2{};
        
    int add_vect2_1 {0};
    cout << "\nEnter 100" << endl;
    cin >> add_vect2_1;
   
    int add_vect2_2 {0};
    cout << "\nEnter 200" << endl;
    cin >> add_vect2_2; 
    
// Dynamical addition (no user prompt) author solution
//    vector1.push_back(100);
//    vector1.push_back(200);
    
    vector2.push_back(add_vect2_1);
    vector2.push_back(add_vect2_2);
    
    cout << "\nThere are " << vector2.size() << " numbers in vector2" << " and they are: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    
    //2D vector
    
    vector <vector<int>> vector_2d {};
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    //Displaying elements of vector_2d
    
    cout << "\nA vector_2d has a " << vector_2d.at(0).at(0) << " in it" << endl;
    cout << "\nA vector_2d has a " << vector_2d.at(0).at(1) << " in it" << endl;
    cout << "\nA vector_2d has a " << vector_2d.at(1).at(0) << " in it" << endl;
    cout << "\nA vector_2d has a " << vector_2d.at(1).at(1) << " in it" << endl;
    
    //Changing vector1.at(0) to 1000
    
    cout << "\nChanging element in vector1.at(0) to 1000" << endl;    
    vector1.at(0) = 1000;
    
    //Displaying elements in vector_2d again
    
    cout << "\nA vector_2d.at(0).at(0) has a " << vector_2d.at(0).at(0) << " in it" << endl;
    cout << "\nA vector_2d.at(0).at(1) has a " << vector_2d.at(0).at(1) << " in it" << endl;
    cout << "\nA vector_2d.at(1).at(0) has a " << vector_2d.at(1).at(0) << " in it" << endl;
    cout << "\nA vector_2d.at(1).at(1) has a " << vector_2d.at(1).at(1) << " in it" << endl;
    
    cout << "\nA vector1.at(0) is a " << vector1.at(0) << endl;
    cout << "\nA vector_2d elemets won't change cause replacemnt of vector1.at(0) happend after adding to vector_2d" << endl;
    
    
    cout << endl;
    return 0;
}