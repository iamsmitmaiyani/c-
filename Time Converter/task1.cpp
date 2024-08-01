#include <iostream>
#include <iomanip>
class TimeConverter 
{
public:
    static void secondsToHHMMSS(int totalSeconds) 
	{
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;
        std::cout << "HH:MM:SS => "
                  << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds
                  << std::endl;
    }
    static int hhmmssToSeconds(int hours, int minutes, int seconds) 
	{
        return (hours * 3600) + (minutes * 60) + seconds;
    }
};
int main()
 {
    int choice;
    std::cout << "Choose an option (1 or 2):\n";
    std::cout << "1. Convert seconds to HH:MM:SS\n";
    std::cout << "2. Convert HH:MM:SS to seconds\n";
    std::cin >> choice;
    if (choice == 1) 
	{
        int totalSeconds;
        std::cout << "Enter total seconds: ";
        std::cin >> totalSeconds;
        TimeConverter::secondsToHHMMSS(totalSeconds);
    } 
	else if (choice == 2) 
	{
        int hours, minutes, seconds;
        std::cout << "Enter hours: ";
        std::cin >> hours;
        std::cout << "Enter minutes: ";
        std::cin >> minutes;
        std::cout << "Enter seconds: ";
        std::cin >> seconds;
        int totalSeconds = TimeConverter::hhmmssToSeconds(hours, minutes, seconds);
        std::cout << "Total seconds => " << totalSeconds << std::endl;
    } 
	else
	{
        std::cout << "Invalid choice!" << std::endl;
    }
    return 0;
}

