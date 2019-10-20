#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

using namespace std;

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, 50,
  NEO_MATRIX_TOP  + NEO_MATRIX_RIGHT  +
  NEO_MATRIX_ROWS    + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

Adafruit_NeoMatrix placeholderMatrix = Adafruit_NeoMatrix(8, 8, 50,
  NEO_MATRIX_TOP  + NEO_MATRIX_RIGHT  +
  NEO_MATRIX_ROWS    + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);


//List holding the alphabetical indices of the word to be spelled
//int phrase[1];
int phrase[1][64];
//Index within phrase of the alphabetical index of the current character to display
int phraseIndex = 0;

//Holds the pixel on/off states for a given frame
bool states[8][8];
//Determines the amount of time (ms) for which each frame in the loop should be displayed
int timePerFrame = 200;

void createLetterA() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][2] = true;
  states[0][3] = true;
  states[0][4] = true;
  states[0][5] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][3] = true;
  states[1][4] = true;
  states[1][5] = true;
  states[1][6] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][2] = true;
  states[2][5] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[3][6] = true;
  states[3][7] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[4][2] = true;
  states[4][3] = true;
  states[4][4] = true;
  states[4][5] = true;
  states[4][6] = true;
  states[4][7] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][2] = true;
  states[5][3] = true;
  states[5][4] = true;
  states[5][5] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][0] = true;
  states[6][1] = true;
  states[6][6] = true;
  states[6][7] = true;
  states[7][0] = true;
  states[7][1] = true;
  states[7][6] = true;
  states[7][7] = true;
  Serial.print("MADE LETTER A");
}

void createLetterB() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][0] = true;
  states[0][1] = true;
  states[0][2] = true;
  states[0][3] = true;
  states[0][4] = true;
  states[0][5] = true;
  states[0][6] = true;
  states[1][0] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][3] = true;
  states[1][4] = true;
  states[1][5] = true;
  states[1][6] = true;
  states[1][7] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][2] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[3][2] = true;
  states[3][3] = true;
  states[3][4] = true;
  states[3][5] = true;
  states[3][6] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[4][2] = true;
  states[4][3] = true;
  states[4][4] = true;
  states[4][5] = true;
  states[4][6] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][2] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][0] = true;
  states[6][1] = true;
  states[6][2] = true;
  states[6][3] = true;
  states[6][4] = true;
  states[6][5] = true;
  states[6][6] = true;
  states[6][7] = true;
  states[7][0] = true;
  states[7][1] = true;
  states[7][2] = true;
  states[7][3] = true;
  states[7][4] = true;
  states[7][5] = true;
  states[7][6] = true;
  Serial.print("MADE LETTER B");
}

void createLetterC() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][2] = true;
  states[0][3] = true;
  states[0][4] = true;
  states[0][5] = true;
  states[0][6] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][3] = true;
  states[1][4] = true;
  states[1][5] = true;
  states[1][6] = true;
  states[1][7] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][2] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][2] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][1] = true;
  states[6][2] = true;
  states[6][3] = true;
  states[6][4] = true;
  states[6][5] = true;
  states[6][6] = true;
  states[6][7] = true;
  states[7][2] = true;
  states[7][3] = true;
  states[7][4] = true;
  states[7][5] = true;
  states[7][6] = true;
  Serial.print("MADE LETTER C");
}

void createLetterD() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][0] = true;
  states[0][1] = true;
  states[0][2] = true;
  states[0][3] = true;
  states[0][4] = true;
  states[0][5] = true;
  states[1][0] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][3] = true;
  states[1][4] = true;
  states[1][5] = true;
  states[1][6] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][5] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[3][6] = true;
  states[3][7] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[4][6] = true;
  states[4][7] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][5] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][0] = true;
  states[6][1] = true;
  states[6][2] = true;
  states[6][3] = true;
  states[6][4] = true;
  states[6][5] = true;
  states[6][6] = true;
  states[7][0] = true;
  states[7][1] = true;
  states[7][2] = true;
  states[7][3] = true;
  states[7][4] = true;
  states[7][5] = true;
  Serial.print("MADE LETTER D");
}

void createLetterE() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER E");
}

void createLetterF() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER F");
}

void createLetterG() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER G");
}

void createLetterH() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER H");
}

void createLetterI() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER I");
}

void createLetterJ() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER J");
}

void createLetterK() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER K");
}

void createLetterL() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER L");
}

void createLetterM() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][0] = true;
  states[0][1] = true;
  states[0][6] = true;
  states[0][7] = true;
  states[1][0] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][5] = true;
  states[1][6] = true;
  states[1][7] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][2] = true;
  states[2][3] = true;
  states[2][4] = true;
  states[2][5] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[3][2] = true;
  states[3][3] = true;
  states[3][4] = true;
  states[3][5] = true;
  states[3][6] = true;
  states[3][7] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[4][3] = true;
  states[4][4] = true;
  states[4][6] = true;
  states[4][7] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][0] = true;
  states[6][1] = true;
  states[6][6] = true;
  states[6][7] = true;
  states[7][0] = true;
  states[7][1] = true;
  states[7][6] = true;
  states[7][7] = true;
  Serial.print("MADE LETTER M");
}

void createLetterN() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  states[0][0] = true;
  states[0][1] = true;
  states[0][6] = true;
  states[0][7] = true;
  states[1][0] = true;
  states[1][1] = true;
  states[1][2] = true;
  states[1][6] = true;
  states[1][7] = true;
  states[2][0] = true;
  states[2][1] = true;
  states[2][2] = true;
  states[2][3] = true;
  states[2][6] = true;
  states[2][7] = true;
  states[3][0] = true;
  states[3][1] = true;
  states[3][2] = true;
  states[3][3] = true;
  states[3][4] = true;
  states[3][6] = true;
  states[3][7] = true;
  states[4][0] = true;
  states[4][1] = true;
  states[4][3] = true;
  states[4][4] = true;
  states[4][5] = true;
  states[4][6] = true;
  states[4][7] = true;
  states[5][0] = true;
  states[5][1] = true;
  states[5][4] = true;
  states[5][5] = true;
  states[5][6] = true;
  states[5][7] = true;
  states[6][0] = true;
  states[6][1] = true;
  states[6][5] = true;
  states[6][6] = true;
  states[6][7] = true;
  states[7][0] = true;
  states[7][1] = true;
  states[7][6] = true;
  states[7][7] = true;
  Serial.print("MADE LETTER N");
}

void createLetterO() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER O");
}

void createLetterP() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER P");
}

void createLetterQ() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER Q");
}

void createLetterR() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER R");
}

void createLetterS() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER S");
}

void createLetterT() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER T");
}

void createLetterU() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER U");
}

void createLetterV() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER V");
}

void createLetterW() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER W");
}

void createLetterX() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER X");
}

void createLetterY() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER Y");
}

void createLetterZ() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  
  Serial.print("MADE LETTER Z");
}

void createBlankSpace() {
  for(int y = 0; y < 8; y++) {
    for (int x = 0; x < 8; x++) {
      states[y][x] = false;
    }
  }
  Serial.print("MADE BLANK SPACE");
}

void createLetter() {
  Serial.print("CREATING LETTER\n");
  Serial.print(phraseIndex);
  Serial.print(" <--------PHRASEINDEX\n\n\n");
  int index = phrase[0][phraseIndex];
  if (index == -1) {
    phraseIndex = 0;
    Serial.print("\n-1 <--------INDEX\n");
    index = phrase[0][phraseIndex];
  }
  if (index == 0) {
    Serial.print("0 <--------INDEX\n");
    createBlankSpace();
  }
  else if (index == 1) {
    createLetterA();
  }
  else if (index == 2) {
    createLetterB();
  }
  else if (index == 3) {
    createLetterC();
  }
  else if (index == 4) {
    createLetterD();
  }
  else if (index == 13) {
    createLetterM();
  }
  else if (index == 14) {
    createLetterN();
  }
  else {
    Serial.print("INDEX NOT SUPPORTED");
    exit(42);
  }
  //Increments phraseIndex
  phraseIndex++;
  Serial.print("Incremented phraseIndex.");
}

void setup() {
  //Initiate Serial communication
  Serial.begin(9600);
  // put your setup code here, to run once:
  //while (!Serial);  // required for Flora & Micro
  delay(500);
  matrix.begin();
  matrix.setBrightness(100);
  matrix.fillScreen(0);
  placeholderMatrix.fillScreen(0);

  //Define the phrase to be displayed
  phrase[0][0] = 1;
  phrase[0][1] = 13;
  phrase[0][2] = 1;
  phrase[0][3] = 14;
  phrase[0][4] = 4;
  phrase[0][5] = 1;
  phrase[0][6] = 2;
  phrase[0][7] = 3;
  phrase[0][8] = 4;
  phrase[0][9] = 0;
  phrase[0][10] = -1;
}

void loop() {
  Serial.print("looping");

  bool calcMatrix = true;
  int randCount = 0;
  int i = 0;
  while (i == 0) {
    uint16_t testColor = matrix.Color(32 + rand() % 64, 64 + rand() % 32, 64 + rand() % 32);
    //Uses phraseIndex to create a new letter
    Serial.print(phraseIndex);
    Serial.print("<---- phraseIndex\n");
    createLetter();
    
    
    int randTarget = rand() % 8;
    if (calcMatrix) {
      Serial.print("TIME TO CALCULATE NEW MATRIX\n");
      for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
          if (states[y][x]) {
            uint16_t pixelColor = matrix.Color((32 + rand() % 16 + (x * y / 3)) % 255, (32 + rand() % 16 + 8 * x) % 255, (32 + rand() % 16 + 8 * y) % 255);
            matrix.drawPixel(x, y, pixelColor);
          }
        }
      }
      calcMatrix = false;
    }

    //Displays the calculated letter
    // The first line usees a global variable but the second just sets it to a specified value
    //int timeRemaining = timePerFrame;
    int timeRemaining = 100;
    
    int timeOn = 2;
    int timeOff = 5;
    while (timeRemaining > 0) {
      matrix.show();
      delay(timeOn);
      placeholderMatrix.show();
      delay(timeOff);
      timeRemaining = timeRemaining - timeOn - timeOff;
      //Serial.print(timeRemaining);
      //Serial.print("\n");
    }
    Serial.print("TIME TO DISPLAY A NEW LETTER.\n");
    matrix.fill(0);
    matrix.show();
    calcMatrix = true;
  }

}