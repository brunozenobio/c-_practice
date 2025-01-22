#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> mivector;
    int sum = 0;
    for (int i = 0; i < 5; i++){
        int num;
        cout << "Ingrese un numero: ";
        cin >> num;
        mivector.push_back(num);
        sum +=  num;

    }
    
    cout << "El promedio es : " << (double) sum /mivector.size() << endl;




    return 0;
}