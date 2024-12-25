int ldrPin = A0;//pinlerimizi tanimladik
int redPin = 8;
int greenPin = 9;
int buzzPin = 10;

void setup() {
  pinMode(ldrPin, OUTPUT);//butun verilerimizi output yani cikis olarak atadik
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);//ldr'nin degerlerini gorebilmek icin monitoru baslattik
}

void loop() {
  
  int ldrVal = analogRead(ldrPin);//degerimizi okuduk
  Serial.println(ldrVal);//dogru karar verebilmek icin degeri ekrana yazdirdik.

  if (ldrVal > 50) {     //ldr degeri 300 kucukse yesil led acik kirmizi led kapali olacak
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    } 
 
  else {      //diger durumlarda yesil kapali kirmizi acik olacak
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    for (int hz = 440; hz < 1000; hz++) {    //for dongusu ile alarm sesini verdik.
      tone(buzzPin, hz, 50);
      }
    for (int hz = 1000; hz > 440; hz--) {
      tone(buzzPin, hz, 50);
    }
  }

}
