#ifndef CONVERSIONS_H
#define CONVERSIONS_H

//Tables of conversions
namespace imptometric
{
float hectare = 0.404685642;
float kilometer = 1.609344;
float yard = 0.9144;
float meter = 0.3048;
float centimeter = 2.54;
}

namespace metrictoimp
{
float acre = 0.404685642;
float mile = 0.62137;
float feet = 3.2808;
float yard = 1.0936;
float inch = 2.54;
}

namespace temp
{
namespace fahr
{
float fahrenheit = 33.8;
float kFahrenheit = -254.87;
}
namespace celsius
{
float celisus = 32;
float kCelsius = 273.15;
}
namespace kelvin
{
float celsius = 273.15;
float fahrenheit = 459.67;
}
}

namespace fiveandnine
{
float fiveovernine = 0.55555;
float nineoverfive = 1.8;
}
#endif // CONVERSIONS_H
