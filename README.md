# Weather Monitoring System (Arduino + RS232)

Simple weather monitor using Arduino UNO, LEDs, and RS232 communication. No real sensors — it simulates temperature data.

## Components
- Arduino UNO
- MAX232 module
- Blue & White LEDs
- 470Ω resistors
- Breadboard & wires
- RS232 cable

## How it works
- Simulates temperature
- Blue LED = High temp (≥30°C)
- White LED = Low temp (<30°C)
- Sends data to PC via RS232

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
