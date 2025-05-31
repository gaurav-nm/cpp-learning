#include <iostream>
using namespace std;
/*
int main() {
    int a;
    cin >> a;

    int n = a;
    cout << "Value of n is: " << n << endl;

    if (a > 0)
        cout << "The number is positive" << endl;
    else
        cout << "Number a is negative" << endl;

    return 0;
}
*/

// to find which number is greater a or b 
int main(){
    int a,b;
    cout << "enter the value of A " << endl;
    cin >> a;
    cout << "enter the value of B" << endl ;
    cin >> b;

    if(a>b){
        cout << "A is greater than B" << endl;
    }
    if (a<b){
        cout << "B is greater than A" << endl;
    }
    
}


