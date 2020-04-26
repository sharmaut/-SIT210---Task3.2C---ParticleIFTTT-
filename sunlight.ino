
int photoresistor = A5;
int photoresistorpower = A0;

void setup() {
    
    pinMode(photoresistor, INPUT);
    pinMode(photoresistorpower, OUTPUT);
    
    digitalWrite(photoresistorpower, HIGH);
}

void loop() {

    int sunlevel = analogRead(photoresistor);
    int x = 1;
    
    if (sunlevel > x) {
        Particle.publish("sun", "up", PRIVATE);
    }
    else if (sunlevel < x) {
        Particle.publish("sun", "down", PRIVATE);
    }
    delay(10000);
}