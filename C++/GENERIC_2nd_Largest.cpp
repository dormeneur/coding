
#include <iostream>
#include <limits.h>
using namespace std;

template <class T>

class Array{
    T *arr;
    int n;
    public:
        void inputArr(){
            cout << "Enter length of array: ";
            cin >> n;
            arr = new T[n];

            for(int i = 0 ; i < n; i++){
                cin >> arr[i];
            }
        }

        void findSecondLargest(){
            T secondmax = INT_MIN;
            T max = INT_MIN;

            for(int i = 0; i < n; i++){
                if(arr[i] > max){
                    secondmax = max;
                    max = arr[i];                    
                }
                else if(arr[i] > secondmax && arr[i] != max){
                    secondmax = arr[i];
                }
            }
            cout << "The second largest element is: " << secondmax << endl;
        }
};
int main(){
    Array <int> s1;
    Array <double> s2;
    s1.inputArr();
    s2.inputArr();
    s1.findSecondLargest();
    s2.findSecondLargest();
}
