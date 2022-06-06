# Bluetooth_ArduinoUNO

Aplicación para gobernar dos motores mediante un módulo Bluetooth HC-05 configurado como esclavo.
En la carpeta 'Configura HC-05' se encuentra el código para Arduino UNO para poder establecer un sesión de comandos AT 
con el Modulo HC-05 y poder configurarlo como esclavo y cambiar sus parametros de fábrica (nombre, PIN, ETC),

Los comando para configurar Nombre del dispositivo , PIN y modo de operación(esclavo) son los siguientes:

1.-AT+ROLE=0 (establecer como esclavo).
2.-AT+PSWD="5530" (Establece pin para poder vincular con el dispositivo).
3.-AT+NAME=<Nombre> (Establecer nombre como aparecerá en los dispositivos de búsqueda).

