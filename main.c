#include <stdio.h>
#include <stdlib.h>
void reportTheWeather(float,float);
void  fromcelciustokelvin(float,float);
int main()
{
float celcius, humidity, kelvin; // Defined celcius, kelvin, and humudity
printf("Welcome to the situation of the weather \nEnter celcius:");
scanf("%f",&celcius); // Enter celcius
printf("Enter humidity level(0-100):");
scanf("%f",&humidity); // Enter humudity
fromcelciustokelvin(celcius,humidity); // Change from celcius to kelvin

    return 0;
}
// in this , I have changed from celcius to kelvin
void  fromcelciustokelvin(float celcius,float humidity)
{
const float x=273;
    float kelvin=celcius+x; // Calculates kelvin with celcius
return reportTheWeather(kelvin,humidity);
}

void reportTheWeather(float kelvin,float humidity )
 {
if (kelvin>298.0 && humidity<70.0 ) // If kelvin is bigger than 298 and humudity is smaller than 70
{
printf("Situation of the weather is sunny\n");
}
 else if (kelvin<283.0 ) // If kelvin is smaller than 283
 {
printf("Situation of the weather is cold");
 }
 else if (kelvin>=283.0 && kelvin<=298.0) // If kelvin is between 298 and 283 
 {
    if (humidity>80.0) // And if humudity is bigger than 80
 {
 printf("Situation of the weather is rainy");
 }
    else if (humidity>70.0 && humidity<=80.00) // Also if humudity is between 70 and 80
 {
printf("Situation of the weather is cloudy");
 }
    else
 {
 printf("Situation of the weather is foggy");
 }
 }
else
{
printf("Situation of the weather is foggy");
}
return reportTheWeather;
 }
