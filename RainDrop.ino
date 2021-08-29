
const int senmin=0;
const int senmax=1024;
int led=13;
int sensory = A0;
int i;
void setup()
{
	serial.begin(9600);
	pinMode(led,OUTPUT);
}
void loop()
{
	int sensor=analogRead(sensory);
	int range=map(sensor,senmin,senmax,0,3);
}
switch(range)
{
	case 0: serial println("raining");
	            digital Write(led,HIGH);
	break;
	
	case 1: serial println("not raining");
	            digital Write(led,LOW);
}
delay(500);
}