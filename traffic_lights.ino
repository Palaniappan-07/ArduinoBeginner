const int LED_GREEN = 8;
const int LED_ORANGE = 9;
const int LED_RED = 10;

const int ORANGE_MULTIPLIER = 4;
const int GREEN_MULTIPLIER = 2;
const int RED_MULTIPLIER = 1;

void blink_led(int ledpin, int multiplier) {
	digitalWrite(ledpin, HIGH);
	delay(multiplier * 250);
	digitalWrite(ledpin, LOW);
}

void setup() {
	pinMode(LED_RED, OUTPUT);
	pinMode(LED_ORANGE, OUTPUT);
	pinMode(LED_GREEN, OUTPUT);
}

void loop() {
	blink_led(LED_RED, RED_MULTIPLIER);
	blink_led(LED_ORANGE, ORANGE_MULTIPLIER);
	blink_led(LED_GREEN, GREEN_MULTIPLIER);
}
