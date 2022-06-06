//Declaracion de entradas del puente H para motor de arranque (motorA) y motor de direccion (motorD)

#include <SoftwareSerial.h>

int motorAIn1 = 2; //Negro
int motorAIn2 = 3; //Rojo

int motorDIn3 = 4;
int motorDIn4 = 5;

//char para leer la instruccion bluetooth
char inbyte = 0; 



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(motorAIn1,OUTPUT);
  pinMode(motorAIn2,OUTPUT);

  pinMode(motorDIn3,OUTPUT);
  pinMode(motorDIn4,OUTPUT);


  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(motorAIn1,HIGH);
  digitalWrite(motorAIn2,LOW);
  digitalWrite(motorDIn3,HIGH);
  digitalWrite(motorDIn4,LOW);
  delay(500);
  digitalWrite(motorAIn1,LOW);
  digitalWrite(motorAIn2,LOW);
  digitalWrite(motorDIn3,LOW);
  digitalWrite(motorDIn4,LOW);
  delay(500);
  digitalWrite(motorAIn1,LOW);
  digitalWrite(motorAIn2,HIGH);
  digitalWrite(motorDIn3,LOW);
  digitalWrite(motorDIn4,HIGH);
  delay(500);
  digitalWrite(motorAIn1,LOW);
  digitalWrite(motorAIn2,LOW);
  digitalWrite(motorDIn3,LOW);
  digitalWrite(motorDIn4,LOW);
  delay(500);*/
 


  if (Serial.available() > 0){
      inbyte = Serial.read();
      Serial.println(inbyte);
      if (inbyte == '2') //Motor hacia adelante
      {
        digitalWrite(motorAIn1,HIGH);
        digitalWrite(motorAIn2,LOW);

        Serial.println("Adelanteeeeeee");
      }
      
      if (inbyte == '3')//Motor hacia atras
      {
        digitalWrite(motorAIn1,LOW);
        digitalWrite(motorAIn2,HIGH);
      }

      if (inbyte == '0')//Detener motor
      {
        digitalWrite(motorAIn1,LOW);
        digitalWrite(motorAIn2,LOW);
      }

       if (inbyte == '4') //Motor izquierda
      {
         digitalWrite(motorDIn3,HIGH);
         digitalWrite(motorDIn4,LOW);
      }
      
      if (inbyte == '5')//Motor derecha
      {
        digitalWrite(motorDIn3,LOW);
        digitalWrite(motorDIn4,HIGH);
      }


      if (inbyte == '6')//Detener motor de direcion
      {
        digitalWrite(motorDIn3,LOW);
        digitalWrite(motorDIn4,LOW);
      }
   }/*else{
      //Detener todos los motores
      digitalWrite(motorAIn1,LOW);
      digitalWrite(motorAIn2,LOW);
      digitalWrite(motorDIn3,LOW);
      digitalWrite(motorDIn4,LOW);
   }*/
   //delay(200);


  
}

//Enviar los valores del carro por el dipositivo android por el modulo Bluetooth
/*void sendDataCarroValues()
 {
  Serial.print('#'); //hay que poner # para el comienzo de los datos, así Android sabe que empieza el String de datos
  Serial.print(voltageValue[k]);
  Serial.print('+'); //separamos los datos con el +, así no es más fácil debuggear la información que enviamos
 Serial.print('~'); //con esto damos a conocer la finalización del String de datos
 Serial.println();
 delay(10);        //agregamos este delay para eliminar tramisiones faltantes
}*/
