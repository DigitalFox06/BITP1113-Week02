// Streaming Data Usage - Design
// Name : Justin Ong Jun Hao   Matric No : B032610226   Section : S2G2

#include <iostream>
using namespace std;

double inputBitrate();										// reads Bitrate (Mbps)
double inputMinutes();										// reads streaming time (minutes)
double inputClassesPerWeek();								// reads number of classes per week
double computeDataMB(double bitrateMbps, double minutes, double ClassesPerWeek);	// return data usage (MB)
void display(double sizeMB, double sizeMBperweek);								// results (MB)

int main()
{
	double bitrateMbps, minutes, ClassesPerWeek, sizeMB;
	// CALL inputBitrate() RETURN in bitrateMbps
	bitrateMbps = inputBitrate();
	// CALL inputMinutes() RETURN in minutes
	minutes = inputMinutes();
	// CALL inputClassesPerWeek() RETURN in ClassesPerWeek
	ClassesPerWeek = inputClassesPerWeek();
	// CALL computeDataUsage() with bitrate in Mbps and time in minutes RETURN in sizeMB
	sizeMB = computeDataMB(bitrateMbps, minutes, ClassesPerWeek);
	// CALL display() with sizeMB and sizeGB (converted from sizeMB)
	display(sizeMB, sizeMB * ClassesPerWeek);
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

double inputClassesPerWeek()
{
	double ClassesPerWeek;
	// DISPLAY prompt for number of classes per week
	cout << "Enter number of classes per week: ";
	// READ number of classes per week
	cin >> ClassesPerWeek;
	// RETURN number of classes per week
	return ClassesPerWeek;
}

double computeDataMB(double bitrateMbps, double minutes, double ClassesPerWeek)
{
	// COMPUTE size in MB as (bitrate in Mbps * 60 seconds * minutes) / 8 bits per byte (Mbps to Mbpm to Mb to MB)
	double sizeMB = (bitrateMbps * 60.0 * minutes) / 8.0;
	// COMPUTE total data usage in MB
	double sizeMBperweek = sizeMB * ClassesPerWeek;
	// RETURN size in MB and total data usage in MB per week
	return sizeMB; return sizeMBperweek;
}

void display(double sizeMB, double sizeMBperweek)
{
	// Convert MB to GB
	double sizeGB = sizeMB / 1024.0;
	// DISPLAY data usage in MB and GB
	cout << "Data usage in Megabyte is: " << sizeMB << " MB" << endl;
	cout << "Data usage in Gigabyte is: " << sizeGB << " GB" << endl;
	cout << "Total data usage in Gigabyte per week is: " << sizeMBperweek / 1024.0 << " GB" << endl;
}