#include<LPC214X.h>
void delay(unsigned int count);
int main()
{
	IODIR0|=(1<<1);
	IODIR0|=(1<<2);
	IODIR0|=(1<<3);
	IODIR0|=(1<<4);
	IODIR0|=(1<<5);
	IODIR0|=(1<<6);
	IODIR0|=(1<<7);
	int n=1;
	while(1)
		{
	switch(n)
	{
		case 1:
		IOSET0|=(1<<2);
		IOSET0|=(1<<3);
		delay(20000);
		case 2:
			IOSET0|=(1<<1);
		IOSET0|=(1<<2);
		IOSET0|=(1<<5);
			IOSET0|=(1<<4);
			IOSET0|=(1<<7);
			delay(20000);
				case 3:
			    IOSET0|=(1<<1);
					IOSET0|=(1<<2);
					IOSET0|=(1<<3);
					IOSET0|=(1<<4);
					IOSET0|=(1<<7);
				delay(20000);
				IOCLR0|=(1<<1);
					IOCLR0|=(1<<2);
					IOCLR0|=(1<<3);
					IOCLR0|=(1<<4);
					IOCLR0|=(1<<7);
				
					case 4:
					IOSET0|=(1<<6);
					IOSET0|=(1<<7);
					IOSET0|=(1<<2);
					IOSET0|=(1<<3);
					delay(20000);
					IOCLR0|=(1<<6);
					IOCLR0|=(1<<7);
					IOCLR0|=(1<<2);
					IOCLR0|=(1<<3);
						case 5:
					IOSET0|=(1<<1);
					IOSET0|=(1<<4);
					IOSET0|=(1<<6);
					IOSET0|=(1<<7);
					IOSET0|=(1<<3);
						delay(20000);
						IOCLR0|=(1<<1);
					IOCLR0|=(1<<4);
					IOCLR0|=(1<<6);
					IOCLR0|=(1<<7);
					IOCLR0|=(1<<3);
							case 6:
					IOSET0|=(1<<1);
					IOSET0|=(1<<4);
					IOSET0|=(1<<6);
					IOSET0|=(1<<7);
					IOSET0|=(1<<3);
					IOSET0|=(1<<5);
							delay(20000);
							IOSET0|=(1<<1);
					IOCLR0|=(1<<4);
					IOCLR0|=(1<<6);
					IOCLR0|=(1<<7);
					IOCLR0|=(1<<3);
					IOCLR0|=(1<<5);
								case 7:
					IOSET0|=(1<<1);
					IOSET0|=(1<<2);
					IOSET0|=(1<<3);
								delay(20000);
								IOCLR0|=(1<<1);
					IOCLR0|=(1<<2);
					IOCLR0|=(1<<3);
									case 8:
					IOSET0|=(1<<1);
					IOSET0|=(1<<2);
					IOSET0|=(1<<3);
					IOSET0|=(1<<4);
					IOSET0|=(1<<6);
					IOSET0|=(1<<7);
					IOSET0|=(1<<5);
									delay(20000);
					IOCLR0|=(1<<1);
					IOCLR0|=(1<<2);
					IOCLR0|=(1<<3);
					IOCLR0|=(1<<4);
					IOCLR0|=(1<<6);
					IOCLR0|=(1<<7);
					IOCLR0|=(1<<5);
										case 9:
					IOSET0|=(1<<1);
					IOSET0|=(1<<2);
					IOSET0|=(1<<3);
					IOSET0|=(1<<4);
					IOSET0|=(1<<6);
					IOSET0|=(1<<7);
										delay(20000);
					IOCLR0|=(1<<1);
					IOCLR0|=(1<<2);
					IOCLR0|=(1<<3);
					IOCLR0|=(1<<4);
					IOCLR0|=(1<<6);
					IOCLR0|=(1<<7);
									}
								}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}