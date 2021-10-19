#define HEARTBEAT 1
#define MESSAGE   2
#define RECON 	  3
#define CON 	  4
#define MAX_SIZE 1024

typedef struct packet{
	int type; //this defines what type of packet it is, either a heartbeat or a message
	int len;   //this defines the session that this packet is from
	int id;
	char buff[MAX_SIZE];
} packet;

