
#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int a, int b){
            real = a;
            img = b;
        }
        Complex(Complex &cc){
            real = cc.real;
            img = cc.img;
        }
        friend istream& operator >> (istream &in, Complex &c){
            in >> c.real >> c.img;
            return in;
        }
        friend ostream& operator << (ostream &out, Complex &c){
            out << c.real << "+" << c.img << "i" << endl;
        }
        void operator +(Complex cc){
            real = real + cc.real;
            img = img + cc.img;
        }
        void operator ++(){
            ++real;
            ++img;
        }
};

int main(){
    Complex c1,c2;
    cin >> c1 >> c2;    //Overloaded >> operator
    c1 + c2;            //c1 calls operator and c2 is the argument
    cout << c1;         //Overloaded << operator
    Complex c3(c2);
    ++c3;
    cout << c3;         //Overloaded << operator

}
