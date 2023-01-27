#include <iostream>
#include <string>   // for std::string class
#include <cstdlib>  // for std::getenv
#include <chrono>
#include "event.h"


int main() {
    const char *birthdateEnv = std::getenv("BIRTHDATE");
    const std::chrono::time_point now{std::chrono::system_clock::now()};
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
   
	if (nullptr != birthdateEnv) {  // the BIRTHDATE environment variable exists
		std::string birthdateString = birthdateEnv;  // assignment operator makes a string out of char *
        	std::cout << "BIRTHDATE = " << birthdateString << std::endl;  // TODO: remove this
		std::cout << static_cast<int>(ymd.year());  

    
		// TODO: Parse the YYYY-MM-DD string, or bail out if the format is wrong
	
       		 // TODO: If the birthdate matches the current date, congratulate the user

		if(birthdateString == )

        	}
	else {
        	std::cout << "No BIRTHDATE environment variable found" << std::endl;  // TODO: remove this
	 }

return 0;
}
