// 1013 - The Greatest
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, temp;
    cin >> a; cin >> b; cin >> c;

    temp = (a+b+abs(a-b))/2;
    temp = (temp+c+abs(temp-c))/2;

    printf("%d eh o maior\n", temp);

	return 0;
}
