int LED=13; // Declaramos un pin  digital con el nombre LED
int SENSOR=2; // Declaramos un pin digital con el nombre SENSOR
int ESTADO=1; // Declaramos una variable de tipo entero llamado ESTADO

void setup() {
pinMode(LED, OUTPUT); // Declaramos el pin llamado LED como una salida
pinMode(SENSOR, INPUT); // Declaramos el pin llamado SENSOR como una entrada 
Serial.begin(9600); // Inicializamos el monitor serial a 9600 baudios
}

void loop() {
ESTADO =digitalRead(SENSOR); // Se hace la lectura digital del sensor

if(ESTADO==0){
digitalWrite(LED, HIGH); // Si nuestra variable esta en alto o en 1 nuestro LED encendera
Serial.print("LED ENCENDIDO");
}
else{
digitalWrite(LED, LOW); // Si la variable no esta en 0 entoces nuestro LED estara apagado 
Serial.print("LED APAGADO");
}

}
