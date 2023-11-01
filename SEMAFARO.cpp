// Estudando a função millis();
int verde = 11;
int amarelo = 12;
int vermelho = 13;
int verdeped = 9;
int vermelhoped = 10;
unsigned long tempo;
unsigned long reset;

void setup() {
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
  Serial.print("Iniciando Programa");
  delay(3000);
}

void loop() {
  tempo = millis() - reset;
  Serial.println(tempo);
  digitalWrite(verde, 1);
  if(tempo > 10000) {
    digitalWrite(verde, 0);
    digitalWrite(amarelo, 1);
  }
  if(tempo>15000) {
    digitalWrite(amarelo, 0);
    digitalWrite(vermelho, 1);
  }
  if(tempo>24000) {
  reset = millis();
  digitalWrite(vermelho, 0);
  }
}
