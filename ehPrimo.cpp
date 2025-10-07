#include <iostream>
using namespace std;

bool ehPrimo(unsigned n);
void montarPrimo(unsigned n);
void montarPrimoRec(unsigned atual, unsigned n, bool primeiro=true);

int main()
{
	int n;
	do {
		cout<<"DIgite um numero: "<<endl;
		cin>>n;
	} while(n <= 1);

	cout<< "Função Linear: [";
	montarPrimo(n);
	cout<<"] "<< endl;

	cout<< "Função Recursiva: [";
	montarPrimoRec(2, n);
	cout << "]"<<endl;


	return 0;
}

bool ehPrimo(unsigned n) {
	if (n <= 1) return false;
	if (n == 2 or n == 3) return true;
	for(unsigned i=2; i<=n/2; i++) {
		if(n%i==0) return false;
	}
	return true;
}

void montarPrimo(unsigned n) {
	int count = 0;
	for(int i=2; i<=n; i++) {
		if(ehPrimo((unsigned)i)) {
			if(count > 0) cout <<", ";
			cout << i;
			count++;
		}
	}
}

void montarPrimoRec(unsigned atual, unsigned n, bool primeiro) {
	if(atual > n) return;

	if(ehPrimo(atual)) {
		if(!primeiro) cout <<", ";
		cout << atual;
		primeiro = false;
	}
	montarPrimoRec(atual+1, n, primeiro);
}