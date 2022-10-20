/*
    Unit 2. Control structures and cycles
    Author: Sofia Calderon Juarez
    Date: 03/10/2022
    Description: Shows the use of do while
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that allows the user to enter 6 temperatures, determine the average, highest and lowest temperature

//Main function integer type
int main (){

    //Declaring variables
    int counter=1;
    float temperature;
    float acumTemperature=0;
    float max=-274;
    float min=274;

    //Loop to repeat the process 6 times
    do
    {
        //Ask the user for the temperatures
        cout << "Please type temperature " <<counter << ": ";
        cin >> temperature;
        //Acccumulator to add up every temperature
        acumTemperature = acumTemperature + temperature;
        counter ++;
        //Compare every temperature to find out the highest and lowest temperature
        if (temperature <= min)
        {
            min= temperature;
        }
        if (temperature >= max)
        {
            max= temperature;
        }
            

    } while (counter <= 6);

    //Display the results
    cout << "The average temperature is " << acumTemperature/6 << ", the higher one is " << max <<" and the minimum is " << min << endl;

    //As a function it must return to a value, in this case 0
    return 0;
}