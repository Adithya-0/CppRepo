#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
double fahrenhit_to_celsius(double);
double fahrenhit_to_kelvin(double);


//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

int main() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    double celsius_temperature = fahrenhit_to_celsius(100.05);
    double kelvin_temperature = fahrenhit_to_kelvin(100.05);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << 100.05 << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----
double fahrenhit_to_celsius(double temperature){
    double temp_in_celsius = (5.0/9.0)*(temperature - 32);
    return round(temp_in_celsius);
}
double fahrenhit_to_kelvin(double temperature){
    double temp_in_kelvin = (5.0/9.0)*(temperature - 32) + 273;
    return round(temp_in_kelvin);
}

