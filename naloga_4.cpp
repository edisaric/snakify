#include <iostream>

using namespace std;
int main() {
    int stranica_a;
    int stranica_b;
    int stranica_c;
    int visina;
    int ploscina;


    cin>>stranica_a>>stranica_b>>stranica_c;
    visina=stranica_b*stranica_a;
    ploscina=stranica_a*visina;

    cout<<visina<<endl<<ploscina<<endl;




    return 0;
}