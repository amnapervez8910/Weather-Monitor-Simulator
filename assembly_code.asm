; Weather Monitor Simulator - AVR Assembly Code
; Temperature indicator using LEDs
; Temperature >= 30 -> Blue LED ON
; Temperature < 30  -> White LED ON

.include "m328pdef.inc"

; Pin Definitions
.equ LED_BLUE = 5    ; PB5 (Arduino Pin 13)
.equ LED_WHITE = 4   ; PB4 (Arduino Pin 12)

; Test temperature value (change to test)
.equ TEMPERATURE = 28

.cseg
.org 0x0000
    rjmp RESET

RESET:
    ; Initialize Stack Pointer
    ldi r16, low(RAMEND)
    out SPL, r16
    ldi r16, high(RAMEND)
    out SPH, r16

    ; Configure LED pins as outputs
    sbi DDRB, LED_BLUE
    sbi DDRB, LED_WHITE

    ; Check temperature and control LEDs
    ldi r16, TEMPERATURE
    cpi r16, 30
    brlt LOW_TEMP

HIGH_TEMP:
    sbi PORTB, LED_BLUE    ; Blue LED ON
    cbi PORTB, LED_WHITE   ; White LED OFF
    rjmp LOOP

LOW_TEMP:
    cbi PORTB, LED_BLUE    ; Blue LED OFF
    sbi PORTB, LED_WHITE   ; White LED ON

LOOP:
    rjmp LOOP              ; Infinite loop
