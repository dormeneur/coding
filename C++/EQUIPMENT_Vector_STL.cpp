#include <iostream>
#include <vector>
using namespace std;

class Equipment{
    int ID, qty;
    string name, brand;
    double price;
    public:
        Equipment(){
            ID = 0;
            qty = 0;
            name = "";
            brand = "";
            price = 0;
        }
        Equipment(int i, string n, string b, double p, int q){
            ID = i;
            name = n;
            brand = b;
            price = p;
            qty = q;
        }
        void addInventory(vector<Equipment> *v){
            cin >> ID >> name >> brand >> price >> qty;
            Equipment E(ID, name, brand, price, qty);
            v -> push_back(E);
        }
        void displayInv(){
            cout << "ID:" << ID << endl;
            cout << "Name:" << name << endl;
            cout << "Brand:" << brand << endl;
            cout << "Price:" << price << endl;
            cout << "Quantity:" << qty << endl;
        }
        void displayVector(vector<Equipment> v){
            for(int i = 0; i < v.size(); i++){
                v[i].displayInv();
            }
        }
        void sell(vector<Equipment> *v, int id){
            int flag = 0;
            for(int i = 0; i < v->size(); i++){
                if((*v)[i].ID == id){
                    flag = 1;
                    cout << "Sale successfulID:"<< (*v)[i].ID << endl;
                    (*v)[i].qty -= 1;
                    break;
                }
            }
            if(!flag){
                cout << "Equipment not found" << endl;
            }
        }
        void search(vector<Equipment> v, string n){
            int idx;
            for(int i = 0; i < v.size(); i++){
                if(n == v[i].name){
                    idx = i;
                }
            }
            v[idx].displayInv();
            cout << "Equipment found";
        }       
};


int main(){
    Equipment e1;
    vector<Equipment> e;
    e1.addInventory(&e);
    e1.displayVector(e);
    e1.sell(&e, 1);
    string s;
    cin >> s;
    e1.search(e, s); 
}