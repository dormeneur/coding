
#include <iostream>
using namespace std;

template <class T>

class SortArray{
    T *ptr;
    int n;
    public:
        void read(){
            cout << "Number of elements: ";
            cin >> n;
            ptr = new T[n];

            for(int i = 0; i < n; i++){
                cin >> ptr[i];
            }
        }
        void sort(){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(ptr[i] > ptr[j]){
                        swap(ptr[i], ptr[j]);
                    }
                }
            }
        }
        void display(){
            cout << "Sorted Array: \n";
            for(int i = 0; i < n; i++){
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    SortArray <int> s1;
    SortArray <double> s2;
    SortArray <string> s3;

    //Inputs
    s1.read();
    s2.read();
    s3.read();

    //Sorting
    s1.sort();
    s2.sort();
    s3.sort();

    //Outputs
    s1.display();
    s2.display();
    s3.display();
}
