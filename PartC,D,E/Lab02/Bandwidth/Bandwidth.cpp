// bandwidth.cpp - converts an Internet speed from Mbps to MBps
#include <iostream>
using namespace std;

double toMBps(double mbps);    // function prototype

int main()
{
    double mbps;
    cout << " Enter Wi-Fi speed (Mbps): ";
    cin >> mbps;
    cout << "That is very much " << toMBps(mbps) << " MB per second " << endl;
    return 0;
}

double toMBps(double mbps)    //function definition
{
    return mbps / 8.0;       // 8 bits = 1 byte
}