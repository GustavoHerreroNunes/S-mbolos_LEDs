/* Este pequenbo codigo tem como objetivo verificar se um botaoo foi precionado
*  , se for a primeira vez ele deverá sinalizar com os LEDs uma letra X, se for
*  a segunda vez dinalizará um H, e depois continuara a ordem do início
*/


int x =0;//Variavel para verificar qual sera� a proxima letra(X ou H);

void setup(){
  
  for(int p =2; p<=8; p++){//Declarando os pinos de 2 à 8 como output e os deixa desligados por princípio
  	pinMode(p, OUTPUT);
  	digitalWrite(p, 0);
  }
  pinMode(10, INPUT);//Pìno de entrada(corresponde ao botão
}

void loop(){
 
	if(digitalRead(10) == HIGH){//Se o pino estiver ligado
	
      for(int z =2; z<=8; z++){//Desligar todos os pinos
      	digitalWrite(z, 0);
      }
      delay(500);
    	switch(x){//Verificação do símbolo
    		case 0://X
      			delay(500);
      			//Pinos para ligar
      			digitalWrite(2, 1);
      			digitalWrite(4, 1);
      			digitalWrite(5, 1);
      			digitalWrite(6, 1);
     	  		digitalWrite(8, 1);
     		
      			x++;//x se torna 1(H)
      			break;
      		case 1://H
      			delay(500);
      			//Pinos para ligar
      			digitalWrite(2, 1);
      			digitalWrite(3, 1);
      			digitalWrite(4, 1);
      			digitalWrite(5, 1);
      			digitalWrite(6, 1);
      			digitalWrite(7, 1);
      	 		digitalWrite(8, 1);
      			
      			x--;//x se torna 0(X)
      			break;
    }
  }
}
