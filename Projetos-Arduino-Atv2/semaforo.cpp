//Traffic light - Semáforo
//Author: Leandro Bezerra - March - 2018

//Definição das variáveis e seus respectivos pinos na Placa Arduino.
int const LED_VERMELHO = 13;
int const LED_AMARELO = 12;
int const LED_VERDE = 11;

//Metodo de configuração da Placa Arduino.
void setup()
{
  //Atribuição das variáveis a saida dos pinos.
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}
//loop de execução.
void loop()
{
  
  digitalWrite(LED_VERMELHO, HIGH);
  digitalWrite(LED_AMARELO, LOW);
  delay(6000); //Aguardar 6 segundos com sinal vermelho. 
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, HIGH);
  delay(6000);//Aguardar 6 segundos com sinal verde.
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(2000);//Aguardar 2 segundos com sinal amarelo.
}
