// set fuses as: Lo: F7 Hi: D9 Ex: FF
#ifndef F_CPU
	#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // set all b & c ports as outputs.
	DDRB=0xff;
	DDRD=0xff;

  while (1) {

    // turn ON all b & c ports.
		PORTB=0xff;
		PORTD=0xff;
		// wait 200 milliseconds.
		_delay_ms(200);
		// turn OFF all b & c ports.
		PORTB=0x00;
		PORTD=0x00;
		// wait 200 milliseconds.
		_delay_ms(200);
		
  }
  return 0;

}
