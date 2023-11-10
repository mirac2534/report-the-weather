#include <stdio.h>
#include <stdlib.h>
void reportTheWeather(float,float);
void  fromcelciustokelvin(float,float);
int main()
{
float celcius, humidity, kelvin;
printf("Welcome to the situation of the weather \nEnter celcius:");
scanf("%f",&celcius);
printf("Enter humidity level(0-100):");
scanf("%f",&humidity);
fromcelciustokelvin(celcius,humidity);

    return 0;
}
// in this , I have changed from celcius to kelvin
void  fromcelciustokelvin(float celcius,float humidity)
{
const float x=273;
    float kelvin=celcius+x;
return reportTheWeather(kelvin,humidity);
}

void reportTheWeather(float kelvin,float humidity )
 {
if (kelvin>298.0 && humidity<70.0 )
{
printf("Situation of the weather is sunny\n");
}
 else if (kelvin<283.0 )
 {
printf("Situation of the weather is cold");
 }
 else if (kelvin>=283.0 && kelvin<=298.0)
 {
    if (humidity>80.0)
 {
 printf("Situation of the weather is rainy");
 }
    else if (humidity>70.0 && humidity<=80.00)
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
