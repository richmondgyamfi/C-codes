#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

int main() {
    std::cout << "currentDateTime()=" << currentDateTime() << std::endl;
    getchar();  // wait for keyboard input
}
// Current date/time based on current system
time_t now = time(0);

// Convert now to tm struct for local timezone
tm* localtm = localtime(&now);
cout << "The local date and time is: " << asctime(localtm) << endl;

// Convert now to tm struct for UTC
tm* gmtm = gmtime(&now);
if (gmtm != NULL) {
cout << "The UTC date and time is: " << asctime(gmtm) << endl;
}
else {
cerr << "Failed to get the UTC date and time" << endl;
return EXIT_FAILURE;
}
