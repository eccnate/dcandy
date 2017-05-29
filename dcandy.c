/* dcandy.c */

#include <stdint.h>


typedef unsigned uint_least8_t   	b1_t;
typedef unsigned uint_least16_t  	b2_t;
typedef unsigned uint_least32_t    	b4_t;
typedef unsigned uint_least64_t		b8_t;

enum {	SUCCESS = 0 ,
	FAILURE = 1
     };

// See fcserver.cpp/FCServer::mainLoop()
void main_loop();

// See tcpnetserver.cpp/TcpNetServer::start()
void start_listening();

void main_loop()
{
	// Indefinite loop
	while(1)
	{
		// Loop through connected USB devices and flush their communication 
		// streams.
		b4_t i = 0;
		b4_t n = 0;

		for (i = 0; i < n; i++)
		{

		}
	}
	return;
}

void start_listening()
{
	// Handle TCP communications
	return;
}

int main(int argc, char** argv)
{
	// Initialize libusb context/struct
	
	// Initialize and start server object
	
	// Server main loop
	main_loop();

	return 0;
}
