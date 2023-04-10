#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	double num;
	string currencyconvert,currency;
	cin >>num>>currency>>currencyconvert;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (currency=="USD"&&currencyconvert=="BGN") {
		cout<<1.79549*num<<" BGN"<<endl;
	}
	else if (currency == "BGN" && currencyconvert == "USD") {
		cout << num/ 1.79549 << " USD" << endl;
	}
	else if (currency == "EUR" && currencyconvert == "BGN") {
		cout << num*1.95583 << " BGN" << endl;
	}
	else if(currency=="BGN"&&currencyconvert=="EUR") {
		cout<<num/1.95583<<" EUR"<<endl;
	}
	else if(currency=="EUR"&&currencyconvert=="GBP") {
		cout<<(num * 1.95583)/2.53405<<" GBP"<<endl;
	}
	else if (currency == "GBP" && currencyconvert == "EUR") {
		cout << (num * 2.53405) / 1.95583 << " " << endl;
	}
	else if(currency=="USD"&&currencyconvert=="EUR") {
		cout<<(num * 1.79549)/1.95583<<" EUR"<< endl;
	}
	else if (currency == "EUR" && currencyconvert == "USD") {
		cout << (num * 1.95583) / 1.79549 << " USD" << endl;
	}
	else if (currency == "GBP" && currencyconvert == "BGN") {
		cout << num * 2.53405 << " BGN" << endl;
	}
	else if (currency == "BGN" && currencyconvert == "GBP") {
		cout << num /2.53405 << " BGN" << endl;
	}
	else if (currency == "GBP" && currencyconvert == "USD") {
		cout << (num * 2.53405) / 1.79549 << " USD" << endl;
	}
	else if (currency == "USD" && currencyconvert == "GBP") {
		cout << (num * 1.79549) / 2.53405 << " GBP" << endl;
	}
	return 0;
}
