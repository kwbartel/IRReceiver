int receiver = 5;
int led = 6;
int value = 0;
int hit_value;
//int old_values[100];
int count;
int lives;

void setup() {
  hit_value = 950;
 // fill_values();
  count = 0;
  lives = 5;
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(receiver);
  /*old_values[count] = value;
  if (count < sizeof(old_values))
     count++;
   else
     count = 0;                      
  */
  Serial.println(value); 
  if (value < hit_value)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}

/**
* Initialize running list of values with values
* higher than the threshold.
*/ /*
void fill_values()
{
  for (int i = 0; i < sizeof(old_values); i++)
    old_values[i] = hit_value + 10;
}

float average()
{
  float avg;
  for (int i = 0; i < sizeof(old_values); i++)
    avg += old_values[i];
  return avg / sizeof(old_values);
} */
