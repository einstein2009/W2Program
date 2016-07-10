#include <iostream>

using namespace std;

int main ()
{
int x, y, z, w;
x=12; y=18;
z=x-5/x;
x=z-y;
y=x+3*z;
w=x-y+2*z;
w++;
z=2*y+w-x;

cout <<x<<y<<z<<w<<endl;
}

