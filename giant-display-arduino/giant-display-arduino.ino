#include <EZExpander.h>
#include <JC_Button.h>

Button greenButton(2, 25, false, false);
Button redButton(3, 25, false, false);

int greenButtonState = 0;
int redButtonState = 0;

int currHundreds = 0;
int currTens = 0;
int currOnes = 0;
int currentNum = 0;

int gear = 0;
int gearVal = 300;
int minus = 0;

int velocity = 1000;

EZExpander expander = EZExpander();

enum nullz{
  ONES = 1,
  TENS = 2,
  HUNDREDS = 3
};

void showNumber(int num, nullz nuller) {
  switch (num)
  {
  case 0:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, HIGH);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, HIGH);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 1:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 2:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, HIGH);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, HIGH);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 3:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 4:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 5:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 6:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, HIGH);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, HIGH);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 7:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 8:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, HIGH);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, HIGH);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, HIGH);
    }
    break;
  case 9:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, HIGH);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, HIGH);
    }
    break;
  
  case 200:
    if (nuller == HUNDREDS) {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, HIGH);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, HIGH);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 201:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, HIGH);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, HIGH);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 202:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, HIGH);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, HIGH);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 203:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, HIGH);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, HIGH);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 204:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, HIGH);
      expander.digitalWrite(25, LOW);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, HIGH);
      expander.digitalWrite(32, LOW);
      expander.digitalWrite(33, LOW);
    }
    break;
  case 205:
    if (nuller == HUNDREDS) {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    } else if (nuller == TENS) {
      expander.digitalWrite(20, LOW);
      expander.digitalWrite(21, LOW);
      expander.digitalWrite(22, LOW);
      expander.digitalWrite(23, LOW);
      expander.digitalWrite(24, LOW);
      expander.digitalWrite(25, HIGH);
      expander.digitalWrite(26, LOW);
    } else if (nuller == ONES) {
      expander.digitalWrite(27, LOW);
      expander.digitalWrite(28, LOW);
      expander.digitalWrite(29, LOW);
      expander.digitalWrite(30, LOW);
      expander.digitalWrite(31, LOW);
      expander.digitalWrite(32, HIGH);
      expander.digitalWrite(33, LOW);
    }
    break;
  default:
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);

    expander.digitalWrite(20, LOW);
    expander.digitalWrite(21, LOW);
    expander.digitalWrite(22, LOW);
    expander.digitalWrite(23, LOW);
    expander.digitalWrite(24, LOW);
    expander.digitalWrite(25, LOW);
    expander.digitalWrite(26, LOW);

    expander.digitalWrite(27, LOW);
    expander.digitalWrite(28, LOW);
    expander.digitalWrite(29, LOW);
    expander.digitalWrite(30, LOW);
    expander.digitalWrite(31, LOW);
    expander.digitalWrite(32, LOW);
    expander.digitalWrite(33, LOW);
    break;
  }
}

int generateRandomNum(int min, int max, bool set = false) {
  return set ? 120 : random(min, max);
}

int pickMax() {
  int numbers[10] = {900, 900, 900, 900, 900, 900, 900, 900, 700, 600};
  return numbers[generateRandomNum(0, 10)];
}

int pickMin() {
  int numbers[10] = {420, 420, 420, 420, 420, 420, 420, 420, 420, 240};
  return numbers[generateRandomNum(0, 10)];
}

void setNumOnPlate(int currNum){
  currHundreds = (int) (currNum - (currNum % 100))/100;
  currTens = (int) ((currNum - (currHundreds*100)) - ((currNum - (currHundreds*100)) % 10))/10;
  currOnes = (currNum - (currHundreds*100) - (currTens*10));
  showNumber(currHundreds, HUNDREDS);
  showNumber(currTens, TENS);
  showNumber(currOnes, ONES);
}

void resetNum() {
  currentNum = generateRandomNum(pickMin(), pickMax());
  gear = 0;
}

void winner() {
  delay(50);
  Serial.println("PLAY");
  int animation = 200;
  for(int i = 0; i<25; i++) {
    showNumber(animation, ONES);
    showNumber(animation, TENS);
    showNumber(animation, HUNDREDS);
    animation++;
    if(animation == 206) {
      animation = 200;
    }
    delay(230);
  }
  setNumOnPlate(888);
  delay(50);
  resetNum();
}

void greenButtonPressed() {
  greenButtonState = greenButton.read();
  
  if (greenButton.wasPressed()) {
    gear++;
  }
}

void redButtonPressed() {
  redButtonState = redButton.read();

  if (redButton.wasPressed()) {
    currentNum = 1;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), greenButtonPressed, CHANGE);
  pinMode(3, INPUT);
  attachInterrupt(digitalPinToInterrupt(3), redButtonPressed, CHANGE);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  currentNum = generateRandomNum(0,0,true);
  setNumOnPlate(currentNum);
}

void loop() {
  if (currentNum == 0) {
    winner();
  }
  if ((gear * gearVal) > 1000) {
    minus = 900;
  } else {
    minus = gear * gearVal;
  }
  delay(velocity - minus);
  currentNum--;
  setNumOnPlate(currentNum);
}
