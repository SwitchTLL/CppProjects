// Section 6
// Global and loack variables

#include <iostream>

using namespace std;

int age{18}; //GLOBAL VARIABLE

int main(){
    
    int age{16}; //LOCAL VARIABLE
    
    cout << age << endl;
    
    return 0;
}