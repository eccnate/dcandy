/* dcandy.c */

typedef unsigned char   b1_t;
typedef unsigned short  b2_t;
typedef unsigned int    b4_t;
typedef unsigned double b8_t;

#define SUCCESS 0
#define FAILURE 1

// See fcserver.cpp/FCServer::mainLoop()
void main_loop();

// See tcpnetserver.cpp/TcpNetServer::start()
void start_listening();

void main_loop()
{
	// Indefinite loop
	for (;;)
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

int main()
{
	// Initialize libusb context/struct
	
	// Initialize and start server object
	
	// Server main loop
	main_loop();

	return 0;
}
