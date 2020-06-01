// 1010 - Simple Calculate
#include <iostream>
using namespace std;

int main(){
	int a, b, codeA, codeB;
	float pa, pb, total;

	cin >> codeA; cin >> a; cin >> pa;
	cin >> codeB; cin >> b; cin >> pb;
	
	total = (a*pa)+(b*pb);

	printf("VALOR A PAGAR: R$ %0.2f\n", total);

	return 0;
}
