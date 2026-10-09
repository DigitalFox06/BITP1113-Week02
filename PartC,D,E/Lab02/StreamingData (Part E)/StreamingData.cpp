// Streaming Data Usage - Design
// Name : Justin Ong Jun Hao   Matric No : B032610226   Section : S2G2

#include <iostream>
using namespace std;

double inputBitrate();										// reads Bitrate (Mbps)
double inputMinutes();										// reads streaming time (minutes)
double computeDataMB(double bitrateMbps, double minutes);	// return data usage (MB)
void display(double sizeMB);								// results (MB)

int main()
{
	double bitrateMbps, minutes, sizeMB;
	// CALL inputBitrate() RETURN in bitrateMbps
	bitrateMbps = inputBitrate();
	// CALL inputMinutes() RETURN in minutes
	minutes = inputMinutes();
	// CALL computeDataUsage() with bitrate in Mbps and time in minutes RETURN in sizeMB
	sizeMB = computeDataMB(bitrateMbps, minutes);
	// CALL display() with sizeMB and sizeGB (converted from sizeMB)
	display(sizeMB);
	return 0;
}

double inputBitrate()
{
	double bitrateMbps;
	// DISPLAY prompt for Bitrate in Mbps
	cout << "Enter Bitrate (Mbps): ";
	// READ Bitrate in Mbps
	cin >> bitrateMbps;
	// RETURN Bitrate in Mbps
	return bitrateMbps;

}

double inputMinutes()
{
	double minutes;
	// DISPLAY prompt for streaming time in minutes
	cout << "Enter streaming time (minutes): ";
	// READ streaming time in minutes
	cin >> minutes;
	// RETURN streaming time in minutes
	return minutes;
}

double computeDataMB(double bitrateMbps, double minutes)
{
	// COMPUTE size in MB as (bitrate in Mbps * 60 seconds * minutes) / 8 bits per byte (Mbps to Mbpm to Mb to MB)
	double sizeMB = (bitrateMbps * 60.0 * minutes) / 8.0;
	// RETURN size in MB
	return sizeMB;
}

void display(double sizeMB)
{
	// Convert MB to GB
	double sizeGB = sizeMB / 1024.0;
	// DISPLAY data usage in MB and GB
	cout << "Data usage in MB is: " << sizeMB << " MB" << endl;
	cout << "Data usage in GB is: " << sizeGB << " GB" << endl;
}