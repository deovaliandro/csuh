#include <iostream>
using namespace std;

int main(){
    float a, b, grade;
    cin >> a;
    cin >> b;

    grade = ((a*3.5)+(b*7.5))/(3.5+7.5);

    printf("MEDIA = %0.5f\n", grade);

    return 0;
}