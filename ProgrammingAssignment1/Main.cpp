#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const long SECONDS_PER_MINUTE = 60L;
	const long MINUTES_PER_HOUR = 60L;
	const long HOURS_PER_DAY = 24L;

	long seconds;
	cout << "Enter a nuber of seconds: ";
	cin >> seconds;

	cout << seconds << " seconds is:" << endl;
	long days = (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);
	long hour = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;
	long minute = SECONDS_PER_MINUTE;

	cout << seconds / days << " days, "
		<< seconds % days / hour << " hours, "
		<< (seconds % days % hour) / minute << " minutes, "
		<< seconds % days % hour % minute << " seconds" << endl;
}