#include <iostream>
using namespace std;

int main(){
    float a, b, c, media;
    cin >> a; cin >> b; cin >> c;

    media = ((a*2)+(b*3)+(c*5))/10;

    printf("MEDIA = %0.1f\n", media);

	return 0;
}