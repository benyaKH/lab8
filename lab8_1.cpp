#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double N,rate,jd ;
	cout << "Enter initial loan: ";
	cin >> N ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin>>jd ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double B ;
	for(int count = 1;N>0;count++){
	    	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count; 
	cout << setw(13) << left << N;
	B = N*(rate/100);
	cout << setw(13) << left << B ;
	N = N+B;
	cout << setw(13) << left << N ;
	if(N<jd){ 
	    jd=N;
	}
	cout << setw(13) << left << jd;
	N = N-jd;
	cout << setw(13) << left << N;
	cout << "\n";
	    
	}
	
	
	return 0;
}