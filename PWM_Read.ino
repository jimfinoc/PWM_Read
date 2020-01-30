byte PWM_PIN11 = 11;
byte PWM_PIN12 = 12;
byte PWM_PIN13 = 13;

byte PWM_PIN21 = 14;
byte PWM_PIN22 = 15;
byte PWM_PIN23 = 16;
byte PWM_PIN24 = 17;
byte PWM_PIN25 = 18;

int pwm_value11;
int pwm_value12;
int pwm_value13;
int pwm_value21;
int pwm_value22;
int pwm_value23;
int pwm_value24;
int pwm_value25;
 
void setup() {
  pinMode(PWM_PIN11, INPUT);
  pinMode(PWM_PIN12, INPUT);
  pinMode(PWM_PIN13, INPUT);
  pinMode(PWM_PIN21, INPUT);
  pinMode(PWM_PIN22, INPUT);
  pinMode(PWM_PIN23, INPUT);
  pinMode(PWM_PIN24, INPUT);
  pinMode(PWM_PIN25, INPUT);
  Serial.begin(115200);
}
 
void loop() {
//  pwm_value11 = pulseIn(PWM_PIN11, HIGH);
//  pwm_value12 = pulseIn(PWM_PIN12, HIGH);
//  pwm_value13 = pulseIn(PWM_PIN13, HIGH);
  pwm_value21 = pulseIn(PWM_PIN21, HIGH);
  pwm_value22 = pulseIn(PWM_PIN22, HIGH);
  pwm_value23 = pulseIn(PWM_PIN23, HIGH);
  pwm_value24 = pulseIn(PWM_PIN24, HIGH);
  pwm_value25 = pulseIn(PWM_PIN25, HIGH);
  Serial.print(" 11:");
  Serial.print(pwm_value11);
  Serial.print(" ");
  Serial.print(" 12:");
  Serial.print(pwm_value12);
  Serial.print(" ");
  Serial.print(" 13:");
  Serial.print(pwm_value13);
  Serial.print("");
  Serial.print(" 21:");
  Serial.print(pwm_value21);
  Serial.print(" ");
  Serial.print(" 22:");
  Serial.print(pwm_value22);
  Serial.print(" ");
  Serial.print(" 23:");
  Serial.print(pwm_value23);
  Serial.print("");
  Serial.print(" 24:");
  Serial.print(pwm_value24);
  Serial.print(" ");
  Serial.print(" 25:");
  Serial.print(pwm_value25);
  Serial.println(" ");
}
