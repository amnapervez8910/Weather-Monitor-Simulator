# Weather Monitoring System (Arduino UNO + RS232 Communication)

A simple weather monitoring system using Arduino UNO that simulates temperature and humidity data without real sensors. Temperature range is indicated using LEDs, and data is transmitted to a PC via RS232 communication using the MAX232 module.

## Components
- Arduino UNO
- MAX232 module
- Blue & White LEDs
- 470Ω resistors
- Breadboard & wires
- RS232 cable

## How It Works
- Arduino generates simulated temperature data
- User enters temperature value via serial terminal
- Arduino compares value with threshold (30°C)
- **Blue LED turns ON** if temperature ≥ 30°C (High)
- **White LED turns ON** if temperature < 30°C (Low)
- Data is sent to PC via MAX232 (TTL to RS232 conversion)

## Run it
1. Connect circuit
2. Upload code to Arduino
3. Open terminal (9600 baud)
4. Enter temperature (e.g., 28 or 35)
5. See LED & serial output

## Troubleshooting
- Check wiring & LED polarity
- Verify COM port & baud rate
- Power the Arduino

## References
- [Arduino](https://www.arduino.cc)
- [MAX232](https://www.max232.com/)

**📁 Full project report with circuit diagram and complete code is attached in this repository.**
