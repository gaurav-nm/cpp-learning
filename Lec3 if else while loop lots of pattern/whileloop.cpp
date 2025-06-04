#include <iostream>
using namespace std;
/*int main(){
    int n;56
    cin >> n;

    int i = 1;

    while(i<=n){

        cout<<i<<" ";
        i=i+1;
    }
}
    */
   

/*
    // Sum 1 to N
    int main(){
        int n;
        cin >> n;
        

        int i=1;
        int sum =0;

        while (i<=n){
            sum=sum+i;
            i=i+1;

        }
        cout << "value of sum is " << sum << endl;

    }
*/






// number is prime or not . airtel01887
int main(){
    int n ;
    cin >> n;

    int i=2;

    while(i<n){
        if(n%i == 0) {
            cout << "not prime ";
           
        }
        else{
            cout<< "Prime Number " << i << endl;
        }
        

        i=i+1;
    }

}