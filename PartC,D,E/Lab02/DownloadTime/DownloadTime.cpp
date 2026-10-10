// downloadtime.cpp - Lab 02 example: Download Time Calculator
// Each "//" line in a function is the psuedocode step it implements.
#include <iostream>
using namespace std;

double inputSize();								// reads file size (MB)
double inputSpeed();							// reads download speed (Mbps)
double computeTime(double size, double speed);	// return download time (seconds)
void display(double seconds);					// results (seconds)

int main()
{
	double sizeMB, speedMbps, seconds;

	// CALL inputSize() RETURN in sizeMB
	sizeMB = inputSize();
	// CALL inputSpeed() RETURN in speedMbps
	speedMbps = inputSpeed();
	// CALL computeTime() with size in MB and speed in Mbps RETURN in seconds
	seconds = computeTime(sizeMB, speedMbps);
	// CALL display() with seconds
	display(seconds);
	return 0;
}

double inputSize()
{
	double sizeMB;
	// DISPLAY prompt for file size in MB
	cout << "Enter file size (MB): ";
	//READ file size in MB
	cin >> sizeMB;
	// RETURN file size in MB
	return sizeMB;
}

double inputSpeed()
{
	double speedMbps;
	// DISPLAY prompt for download speed in Mbps
	cout << "Enter download speed (Mbps): ";
	// READ download speed in Mbps
	cin >> speedMbps;
	// RETURN download speed in Mbps
	return speedMbps;
}

double computeTime(double sizeMB, double speedMbps)
{
	// COMPUTE speed from Mb to MB (8bit = 1byte)	
	double sizeMb = sizeMB * 8.0;
	// COMPUTE seconds as sizeMb / speedMBps
	double seconds = sizeMb / speedMbps;
	// RETURN seconds
	return seconds;
}

void display(double seconds)
{
	// DISPLAY minutes in seconds /60
	double minutes = seconds / 60.0;
	// DISPLAY seconds as download time in seconds 
	cout << "Estimated download time: " << seconds << " seconds" << endl;
	// DISPLAY minutes as download time in minutes
	cout << "Estimated download time: " << minutes << " minutes" << endl;
}

	
	