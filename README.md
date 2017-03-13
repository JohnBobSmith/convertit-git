# ConvertIt! - V0.1
## Convert between common systems of measurement

ConvertIt! is a simple, command line application designed to allow users to convert between common systems and 
units of measurement. For example, at this time you can convert Celsius to Fahrenheit or Metric to Imperial and 
the reverse (Imperial to Metric, Fahrenheit to Celsisu). This program has been designed around simplicity and ease of use.
A copy of the help table is included below:

ConvertIt! Program usage:

  [-A <int>] - Convert acres to hectares
  
  [-c <int>] - Convert centimeters to inches
  
  [-C <int>] - Convert degrees Celsius to degrees Fahrenheit
  
  [-F <int>] - Convert degrees Fahrenheit to degrees Celsius
  
  [-h]       - Show this help and exit
  
  [-H <int>] - Convert hectares to acres
  
  [-i <int>] - Convert inches to centimeters
  
  [-I <int>] - Convert feet to meters
  
  [-K <int>] - Convert kilometers to miles
  
  [-L <int>] - Convert miles to kilometers.
  
  [-M <int>] - Convert meters to feet
  
  [-m <int>] - Convert meters to yards
  
  [-U] - Display unit symbols IE a 'C' for Celsius
  
         Must be specified as third (3rd) argument.
         
  [-u] - Same as above, but suppress info message.
  
  [-Y <int>] - Convert yards to meters

For the most up to date table, run convertit -h at any time.

## Why ConvertIt! ?
ConvertIt! was created because of a couple of reasons:

1) I wanted to be able to convert outputs from other programs (more on that later).

2) I wanted to be able to convert stuff without an internet connection. Why Google it when you can ./convertit ?

3) I wanted to have conversions all in one place. This makes life easier to the user, in my opinion.

4) I wanted a change from my game programming, and I thought that a utlity would be a great thing to write.


## Example usage
Recalling point one from earlier, I wanted to be able to read standard input and convert the temperatures of the
hardware sensors from Celsius to Fahrenheit:

[jbs@dmb-gaming-laptop Debug]$ inxi -Fxz | grep Temp

Sensors:   System Temperatures: cpu: 40.2C mobo: N/A gpu: 39.0

[jbs@dmb-gaming-laptop Debug]$ inxi -Fxz | grep Temp | cut -c 38-41 | ./convertit -C

104.36[jbs@dmb-gaming-laptop Debug]$ 

As we can see, we get an output of 104.36. ConvertIt!'s ouput is designed to be very clean, omitting the 
newline character deliberately. You can optionally pass -U or -u to add the unit symbols.

## License
You are free to do whatever you want with this, subject to the MIT license.
