//https://ingenieriaelectronica.org/utilizar-el-teclado-matricial-4x4-con-arduino/
#include<Keypad.h>
//ESTE CÓDIGO ME FUNCIONA PERO HACE LO QUE LE DA LA GANA AL ESCRIBIR. CREO QUE HAY QUE SOLDAR MEJOR LA PLACA
const byte filas = 4;
const byte columnas = 4;
byte pinesF[filas] = {9,8,7,6};
byte pinesC[columnas] = {5,4,3,2};
 
char teclas[filas][columnas] = {
 
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'*','0','#','D'}
};
 
Keypad teclado = Keypad(makeKeymap(teclas), pinesF, pinesC, filas, columnas);
 
char tecla;
 
void setup() {
 Serial.begin(9600);
}
void loop() {
 tecla = teclado.getKey();
 if (tecla != 0)
 Serial.print(tecla);
}
