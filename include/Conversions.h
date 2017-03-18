#ifndef CONVERSIONS_H
#define CONVERSIONS_H

//"Table" of conversions
//I find that namespaces work
//quite well for this purpose.
namespace imptometric
{
extern float hectare;
extern float kilometer;
extern float yard;
extern float meter;
extern float centimeter;
}

namespace metrictoimp
{
extern float acre;
extern float mile;
extern float feet;
extern float yard;
extern float inch;
}

namespace temp
{
extern float fahrenheit;
extern float kFahrenheit;
extern float celsius;
extern float kCelsius;
namespace kelvin
{
extern float celsius;
extern float fahrenheit;
}
}

//For cases where we need to divide
//5/9 or 9/5, use the decimal instead.
namespace fiveandnine
{
extern float fiveovernine;
extern float nineoverfive;
}
#endif // CONVERSIONS_H
