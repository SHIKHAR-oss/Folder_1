#include <iostream>
using namespace std;

int main() {
    int num[]={5,15,22,1,-12,-13};
    int size=6;

    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for ( int i=0 ; i<size ; i++){
        if (num[i] < smallest){
            smallest = num[i];
        }
        
    }
    cout << "smallest = " << smallest << endl;
    for ( int i=0 ; i<size ; i++){
        if (num[i] > largest){
            largest = num[i];
        }
        
    }
    cout << " largest = " << largest << endl;



    return 0;
}
