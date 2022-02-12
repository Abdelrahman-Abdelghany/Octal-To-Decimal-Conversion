#include <bits/stdc++.h>

using namespace std;

int conv_oct(int oct)
{
    int dec = 0, i = 0, rem;
    while (oct != 0)
    {
        rem = oct % 10;
        oct /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    return dec;
}

int main() {
    long long n;
    cout<<"Enter a octal number: ";
    cin>>n;
    cout<<"octal number represented by : "<<conv_oct(n)<<" in decimal";
    return 0;
}
