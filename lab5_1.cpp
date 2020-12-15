#include<iostream>
using namespace std;

int main(){
	int I = 0;
	int J = 0;
	int A = 1;
	while ( A !=0 ){
		cout << "Enter an integer: ";
		cin >> A;
		if (A % 2 == 0){
			I += 1;
		}else{
			J += 1;
		}
	}
    cout << "#Even numbers = " << I-1 << "\n";
    cout << "#Odd numbers = " << J ;
    return 0;
	}