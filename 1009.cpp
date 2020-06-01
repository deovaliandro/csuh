#include <iostream>
using namespace std;

int main(){
    string name;
    float salary, total, fsalary;

    cin >> name; cin >> salary; cin >> total;

    fsalary = salary + ((total*15)/100);

    printf("TOTAL = R$ %0.2f\n", fsalary);

	return 0;
}
