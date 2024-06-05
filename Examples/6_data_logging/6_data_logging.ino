#include <SPI.h>
#include <SD.h>

const int chipSelect = 10;

void setup() 
{
  Serial.begin(9600);
  init_sd();
}

void loop() 
{
  String data = "";
  data = String(analogRead(A0)) + ";";
  append_file(data);
  delay(200);
}

void init_sd()
{
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) 
  {
    Serial.println("Card failed, or not present");
    while (1);
  }
  Serial.println("card initialized.");
}

void append_file(String dataString)
{
  File dataFile = SD.open("datalog.txt", FILE_WRITE);

  if (dataFile) 
  {
    dataFile.println(dataString);
    dataFile.close();
    Serial.println(dataString);
  }
  else 
  {
    Serial.println("error opening datalog.txt");
  }
}