int start_biru_spd(int ctr) {
  c(ctr++, 5, hitam,  3, 10, 130,  300,  100, 0b11000000000000, atau,   0,    pid,    -60,   100,    200, 0b00011100000000, atau, 0);//0
  c(ctr++, 5, hitam,  5, 25, 100,  200,  100, 0b11000000000011, atau,   0,    free,     0,     0,      0, 0b00011100000000, atau, 0);//1
  c(ctr++, 5, hitam,  5, 25, 150,  350,  100, 0b11000000000000, atau,   0,    pid,    -60,   100,    200, 0b00011100000000, atau, 0);//2
  c(ctr++, 5, hitam,  3, 10, 100,  400,  100, TM              , atau,   0,   free,      0,     0,      0, 0b00011100000000, atau, 0);//3

  return ctr;
}

int biru_spd(int ctr) {
  c(ctr++, 5, hitam, 3, 10, 150,    0,   50, TM              ,  dan,  0,   pickp,     0,     0,   3000, 0b00001000010000,  dan, -100);//4 biru
  c(ctr++, 5, hitam, 3, 10, 150,    0,  100, TM              , atau, 10,   free,   -100,  -100,    200, 0b00000111100000, atau, 0);//5
  c(ctr++, 5, hitam, 4, 10, 150,    0,   80, TM              , atau, 10,    pid,    -80,    80,    200, 0b11000000000000, atau, -500);//6
  c(ctr++, 5, hitam, 3,  5,  80,  300,  100, 0b11000000000000, atau,  0,   free,    -60,   100,    270, 0b00001100000000, atau, 0);//7
  c(ctr++, 5, putih, 3,  5, 100,  450,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    150, 0b00000001111000, atau, 0);//8
  c(ctr++, 5, putih, 3,  5, 100,  600,  100, 0b11100000000111, atau,  0,   free,    150,   150,    100, 0b00001110000000, atau, 0);//9
  c(ctr++, 5, hitam, 5, 20, 220,  450,  100, 0b11000000000000, atau, 10,    pid,    -60,   100,    200, 0b00011100000000, atau, 0);//10
  c(ctr++, 5, hitam, 3,  5, 100,  100,   80, 0b11000000000000, atau,  0,  dropp,      0,     0,    200, blank           ,  dan, 0);//11 biru

  return ctr;
}

int biru_ungu_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 150,    0,  100, TM              , atau, 10,   free,   -100,  -100,   240, 0b00000001110000, atau, 0);//12
  c(ctr++, 5, hitam, 3,  5, 100,    0,   50, TM              , atau, 10,    pid,   -130,   130,    130, 0b11000000000000, atau, 0);//13
  c(ctr++, 5, hitam, 3,  5,  50,  200,  120, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//14
  c(ctr++, 5, hitam, 4,  10, 100, 200,  150, 0b11100000000111, atau,  0,    free,     0,     0,      0, 0b00001110000000, atau, 0);//15
  c(ctr++, 5, hitam, 3,  10, 200,  250,  100, 0b11000000000000, atau,  0,    free,    100,   100,    100, 0b00001110000000, atau, 0);//16
  c(ctr++, 5, putih, 3,  5, 100,  350,  100, 0b00000000000011, atau,  0,    pid,    120,   -60,    200, 0b00000000110000, atau, 0);//17
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,   free,    100,   100,    100, 0b00000111000000, atau, 0);//18
  c(ctr++, 5, hitam, 3,  5, 100,  200,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//19

  c(ctr++, 5, hitam, 3,  5, 100,  200,  100, 0b00000000000011, atau,  0,   free,      0,     0,      0, 0b00000111000000, atau, 0);//20

  return ctr;
}

int ungu_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 100,    0,   50, TM              , atau,  0,  pickp,      0,     0,    600, 0b00011000000000, atau, -100);//20 ungu
  c(ctr++, 5, hitam, 3,  5, 130,    0,  130, TM              , atau,  0,   free,   -100,  -100,    150, 0b00000000111000, atau, 0);//21
  c(ctr++, 5, hitam, 3,  5, 100,    0,   50, TM              , atau,  0,    pid,    130,  -130,    100, 0b00000000000011, atau, 0);//22
  c(ctr++, 5, hitam, 3,  15, 130,  200,  100, 0b00000000000011, atau, 10,   pid,    100,   -60,    150, 0b00000000111000, atau, 0);//23
  c(ctr++, 5, hitam, 5, 10, 120,  200,  150, 0b11100000000111, atau,  0,   free,      0,     0,      0, 0b11100000000111, atau, 0);//24
  c(ctr++, 5, hitam, 3, 10, 180,  450,  130, 0b00000000000011, atau,  0,   free,    100,   100,     50, 0b11100000000111, atau, 0);//25
  c(ctr++, 5, putih, 3, 10, 120,  300,  100, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//26
  c(ctr++, 5, putih, 3, 15, 100,  200,  100, TM              ,  dan,  0,   free,      0,     0,      0, 0b00011100000000, atau, 0);//27
  c(ctr++, 5, putih, 3, 20, 130,  300,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    150, 0b00000000110000, atau, 0);//28
  c(ctr++, 5, putih, 3, 15, 100,  150,   80, 0b00000000000011, atau,  0,   free,      0,     0,      0, blank           ,  dan, 0);//29
  c(ctr++, 5, putih, 3, 10,  80,    0,   80, TM              , atau,  0,  dropp,      0,     0,    170, blank           ,  dan, 0);//30
  return ctr;
}

int ungu_oren_spd(int ctr) {
  //  c(ctr++, 5, putih, 3, 10, 100,    0,  100, TM              , atau,  0,   free,   -100,   -90,   400, 0b00000001110000, atau, 0);//31
  //  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     80,   -80,    100, 0b00000000011100, atau, 0);//32
  c(ctr++, 5, putih, 3, 10, 100,    0,  100, TM              , atau,  0,   free,   -100,   -90,    200, 0b00000001110000, atau, 0);//33
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,    -80,    80,    100, 0b11000000000000, atau, 0);//34
  c(ctr++, 5, putih, 3,  5, 100,  200,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00111000000000, atau, 0);//35
  c(ctr++, 5, putih, 5, 20, 130,  500,  130, 0b11000000000011, atau,  0,   free,    100,   100,    100, 0b00000011000000, atau, 0);//36

  c(ctr++, 5, hitam, 3,  5, 150,  300,  120, 0b00000000000011, atau,  0,    pid,    100,   -60,    150, 0b00000000111000, atau, 0);//37
  c(ctr++, 5, hitam, 3,  5, 130,  100,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011110000000, atau, 0);//38
  c(ctr++, 5, hitam, 5, 20, 130,  400,  100, 0b11000000000011, atau,  0,   free,    100,   100,    80, 0b00001100000000, atau, 0);//39
  return ctr;
}

int oren_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 100,    0,   50, TM              , atau,  0,  pickp,      0,     0,   5000, 0b00100000000100, dan,  0);//40 oren
  c(ctr++, 5, hitam, 5, 10, 150,    0,   30, TM              , atau,  0,   free,   -100,  -100,    300, 0b00000000011100, atau, 0);//41
  c(ctr++, 5, hitam, 5, 10, 150,    0,   80, TM              , atau, 10,    pid,    -80,    80,    260, 0b11000000000000, atau, 0);//42
  c(ctr++, 5, hitam, 5, 15, 100,  250,  150, 0b11000000000011, atau,  0,   free,      0,     0,      0, 0b00000000011100, atau, 0);//41
  c(ctr++, 5, hitam, 5, 25, 150,  450,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    200, 0b00000000011100, atau, 0);//43
  c(ctr++, 5, hitam, 5, 20, 130,  400,  130, 0b11000000000011, atau,  0,   free,      0,     0,      0, 0b00000000111000, atau, 0);//44
  c(ctr++, 5, hitam, 3,  5, 150,  200,   60, TM              , atau,  0,   dropp,     0,     0,    250, blank           ,  dan, 0);//45 oren

  return ctr;
}

int oren_lilin_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 150,    0,  100, TM              , atau,  0,   free,   -100,  -100,    200, 0b00000000111000, atau, 0);//46
  c(ctr++, 5, hitam, 5, 10, 150,    0,   80, TM              , atau,  0,    pid,    100,  -100,    280, 0b00000000000011, atau, 0);//47
  c(ctr++, 5, hitam, 5, 20, 100,  200,  100, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00001100000000, atau, 0);//48
  c(ctr++, 5, hitam, 5, 20, 100,  300,  100, 0b00000000000011, atau, 10,    pid,    100,   -60,    150, 0b00000000110000, atau, 0);//49
  c(ctr++, 5, hitam, 5, 20, 150,  450,  150, 0b00000000000011, atau,  0,   free,    130,   130,    100, 0b00000111000000, atau, 0);//50
  c(ctr++, 5, putih, 3, 30, 150,  550,  100, 0b11000000000000, atau, 10,    pid,    -60,    100,   200, 0b00011100000000, atau, 0);//51
  c(ctr++, 5, putih, 3, 15, 100,  600,   80, 0b11000000000000, atau,  0,   free,     50,    50,     80, 0b11100000000111, atau, 0);//52
  c(ctr++, 5, putih, 3,  5, 100,    0,  100,  TM             , atau,  0,   fire,      0,     0,   3000, 0b11000000000011, atau, 0);//53
  return ctr;
}

int biru_oren_spd(int ctr) {
  //  c(ctr++, 5, putih, 3, 10, 100,    0,  100, TM              , atau,  0,   free,   -150,   -150,   530, 0b00000001110000, atau, 0);//12
  //  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     -80,   80,   250, 0b11000000000000, atau, 0);//13
  c(ctr++, 5, hitam, 3,  5, 100,    0,  100, TM              , atau,  0,   free,   -100,   -90,    200, 0b00000001110000, atau, 0);//12
  c(ctr++, 5, hitam, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     80,  -100,    100, 0b00000000000110, atau, 0);//13
  c(ctr++, 5, hitam, 5, 10,  80,  100,   80, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//14
  c(ctr++, 5, hitam, 5, 25, 100,  200,  120, 0b11000000000000, atau,  0,   free,      0,     0,      0, 0b00011100000000, atau, 0);//15
  c(ctr++, 5, hitam, 5, 25, 150,  200,  100, 0b11000000000000, atau, 10,    pid,    -60,   100,    250, 0b00011100000000, atau, 0);//16
  c(ctr++, 5, hitam, 5, 20, 130,  150,  100, 0b11000000000011, atau,  0,   free,     100,  100,    120, 0b00001100000000, atau, 0);//17

  return ctr;
}

int oren_ungu_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 150,    0,  100, TM              , atau,  0,   free,   -100,  -100,    200, 0b00000000111000, atau, 0);//53
  c(ctr++, 5, hitam, 3,  5, 150,    0,   80, TM              , atau,  0,    pid,    100,  -100,    280, 0b00000000000011, atau, 0);//54
  c(ctr++, 5, hitam, 5, 10, 100,  200,  100, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00001100000000, atau, 0);//42
  c(ctr++, 5, hitam, 5, 10, 100,  200,  100, 0b00000000000011, atau, 10,    pid,    100,   -60,    150, 0b00000000110000, atau, 0);//43
  c(ctr++, 5, hitam, 5, 25, 100,  200,  150, 0b11100000000111, atau,  0,   free,      0,     0,      0, 0b00001110000000, atau, 0);//14
  c(ctr++, 5, hitam, 4, 20, 200,  250,  100, 0b11000000000000, atau,  0,   free,    100,   100,    100, 0b00001110000000, atau, 0);//14
  c(ctr++, 5, putih, 5, 20, 100,  350,  100, 0b00000000000011, atau,  0,    pid,    120,   -60,    200, 0b00000000110000, atau, 0);//15
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,   free,    100,   100,    100, 0b00000111000000, atau, 0);//16
  c(ctr++, 5, hitam, 3,  5, 100,  200,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//17
  c(ctr++, 5, hitam, 3,  5, 100,  200,  100, 0b00000000000011, atau,  0,   free,      0,     0,      0, 0b00000111000000, atau, 0);//18

  return ctr;
}


int ungu_lilin_spd(int ctr) {
  //  c(ctr++, 5, putih, 3, 10, 100,    0,  100, TM              , atau,  0,   free,   -120,   -120,   500, 0b00000001110000, atau, 0);//27
  //  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     80,   -80,    100, 0b00000000011000, atau, 0);//28
  //  c(ctr++, 5, putih, 3,  5, 100,  300,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    250, 0b00000000011000, atau, 0);//65
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,   free,   -100,   -90,    200, 0b00000001110000, atau, 0);//62
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,   -100,    80,    100, 0b11000000000000, atau, 0);//63
  c(ctr++, 5, putih, 3,  5, 100,  100,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//64
  c(ctr++, 5, putih, 3, 15, 130,  400,  120, 0b00000000000011, atau,  0,    pid,    100,   -60,    150, 0b00000001110000, atau, 0);//65
  c(ctr++, 5, putih, 5, 25, 130,  200,  130, 0b11000000000000, atau,  0,   free,    130,   130,    100, 0b00000011000000, atau, 0);//66
  c(ctr++, 5, hitam, 5, 25, 220,  550,   70, 0b11100000000000, atau,  30,    pid,   -60,   100,    150, 0b00011100000000, atau, 0);//67
  c(ctr++, 5, hitam, 5, 20, 100,  200,  130, 0b11000000000011, atau,  0,    free,     0,     0,      0, 0b00011100000000, atau, 0);//68
  c(ctr++, 5, hitam, 5, 20, 180,  200,  150, 0b11000000000011, atau,  0,    free,   100,   100,     50, 0b00011100000000, atau, 0);//68
  c(ctr++, 5, putih, 3, 20, 120,  500,   80, 0b11000000000011, atau,  0,   free,     50,    50,     80, 0b11100000000111, atau, 0);//69
  c(ctr++, 5, hitam, 3, 10, 100,    0,  100,  TM             , atau,  0,   fire,      0,     0,   3000, 0b11000000000011, atau, 0);//70
  return ctr;
}

int start_ungu_spd(int ctr) {
  c(ctr++, 5, hitam, 5, 10, 180,  400,  100, 0b00000000000011, atau,  0,   free,    100,    100,   100, 0b00000000000011, atau, 0);//0
  c(ctr++, 5, hitam, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     40,   -140,   200, 0b00000000000111, atau,   0);//1

  return ctr;

}

int ungu_biru_spd(int ctr) {
  //  c(ctr++, 5, putih, 3, 10, 100,    0,  100, TM              , atau,  0,   free,   -130,   -120,   500, 0b00000001110000, atau, 0);//27
  //  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,     80,   -80,    100, 0b00000000011000, atau, 0);//28
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,   free,   -100,   -90,    200, 0b00000001110000, atau, 0);//62
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,    pid,   -100,    80,    100, 0b11000000000000, atau, 0);//63
  c(ctr++, 5, putih, 3,  5, 100,  100,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//64
  c(ctr++, 5, putih, 3,  5, 100,  300,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    250, 0b00000000111000, atau, 0);//65
  c(ctr++, 5, putih, 3,  5, 100,  300,  100, 0b00000000000011, atau,  0,   free,      0,     0,      0, 0b00000011000000, atau, 0);//66
  c(ctr++, 5, hitam, 3,  5, 100,  150,  100, 0b00000000000011, atau,  0,    pid,    100,   -60,    150, 0b00000000011000, atau, 0);//67
  c(ctr++, 5, hitam, 3,  5, 100,  400,  100, TM              , atau,  0,    free,     0,     0,      0, 0b00011100000000, atau, 0);//2

  return ctr;
}

int oren_biru_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 150,    0,  100, TM              , atau,  0,   free,   -100,   -100,   200, 0b00000000111000, atau, 0);//0
  c(ctr++, 5, hitam, 3,  5, 150,    0,   80, TM              , atau,  0,    pid,    100,   -100,   280, 0b00000000000011, atau, 0);//1
  c(ctr++, 5, hitam, 3,  5, 100,  300,  100, 0b00000000000011, atau,  0,    pid,    100,    -60,   230, 0b00000000111000, atau, 0);//2
  c(ctr++, 5, putih, 3,  5, 100,    0,  100, TM              , atau,  0,   free,    100,    100,   100, 0b00000001110000, atau, 0);//2
  c(ctr++, 5, putih, 3,  5, 100,  100,  100, 0b11000000000000, atau,  0,    pid,    -60,    100,   150, 0b00011100000000, atau, 0);//4
  c(ctr++, 5, putih, 3,  5, 120,  400,  120, 0b00000000000110, atau,  0,   free,      0,      0,     0, 0b00000000111000, atau, 0);//2
  c(ctr++, 5, hitam, 3,  5, 100,   50,  100, 0b00000000000011, atau,  0,    pid,    100,    -60,   150, 0b00000000111000, atau, 0);//4
  c(ctr++, 5, hitam, 3,  5, 130,  200,  130, 0b00000000000011, atau,  0,   free,      0,      0,     0, 0b00000000111000, atau, 0);//4
  c(ctr++, 5, hitam, 3,  5, 130,  300,  130, TM              , atau,  0,   free,      0,      0,     0, 0b00011100000000, atau, 0);//2

  return ctr;
}

int biru_lilin_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 150,    0,  100, TM              , atau, 10,   free,   -100,  -100,   240, 0b00000001110000, atau, 0);//12
  c(ctr++, 5, hitam, 3,  5, 100,    0,   50, TM              , atau, 10,    pid,   -130,   130,    130, 0b11000000000000, atau, 0);//13
  c(ctr++, 5, hitam, 3,  5,  50,  200,  120, 0b11000000000000, atau, 10,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//14
  c(ctr++, 5, hitam, 4,  10, 100, 200,  150, 0b11100000000111, atau,  0,    free,     0,     0,      0, 0b00001110000000, atau, 0);//15
  c(ctr++, 5, hitam, 3,  10, 200,  250, 150, 0b11000000000000, atau,  0,    free,    150,   150,    50, 0b00001110000000, atau, 0);//16
  c(ctr++, 5, putih, 3,  5, 150,  600,  100, 0b11000000000000, atau, 10,    pid,     -60,   100,    200, 0b00011000000000, atau, 0);//17
  c(ctr++, 5, putih, 3, 30, 120,  500,   80, 0b11000000000000, atau,  0,   free,     50,    50,    100, 0b11100000000111, atau, 0);//46
  c(ctr++, 5, putih, 3,  5, 100,    0,  100,  TM             , atau,  0,   fire,      0,     0,   3000, 0b11000000000011, atau, 0);//47

  return ctr;
}

int start_oren_spd(int ctr) {
  c(ctr++, 5, hitam, 3,  5, 100,  200,  200, 0b11000000000000, atau,  0,   free,     0,     0,      0, 0b11100000000111, atau, 0);//0
  c(ctr++, 5, hitam, 3,  5, 200,  300,  200, 0b00000000000011, atau,  0,   free,    100,    100,     50, 0b11100000000111, atau, 0);//0
  c(ctr++, 5, putih, 3,  5, 100,  150,  100, 0b11000000000000, atau,  0,    pid,    -60,   100,    150, 0b00011100000000, atau, 0);//1
  c(ctr++, 5, putih, 3,  10, 130,  500,  100, 0b11000000000000, atau,  0,   free,     0,     0,      0, 0b00000000000011, atau, 0);//2
  c(ctr++, 5, hitam, 3,  5, 100,  200,  100, 0b00000000000111, atau, 10,    pid,    100,   -60,    200, 0b00000000111000, atau, 0);//3
  c(ctr++, 5, hitam, 3,  5, 150,  350,  100, 0b00000000000011, atau,  0,   free,    100,   100,    100, 0b00001100000000, atau, 0);//4

  return ctr;
}


void plan1() {
  int ctr = 0;
  cp[1] = 4;   //pick biru
  cp[2] = 10;  //drop biru
  cp[3] = 21;  //pick ungu
  cp[4] = 36;  //otw oren
  cp[5] = 39;  //pick oren
  cp[6] = 49;  //otw  lilin

  ctr = start_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_lilin_spd(ctr);

}


void plan2() {
  int ctr = 0;
  cp[1] = 4;   //pick biru
  cp[2] = 10;  //drop biru
  cp[3] = 17;  //pick oren
  cp[4] = 28;  //otw ungu
  cp[5] = 35;  //pick ungu
  cp[6] = 52;  //otw  lilin

  ctr = start_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_lilin_spd(ctr);

}

void plan3() {
  int ctr = 0;
  cp[1] = 3;   //pick ungu
  cp[2] = 21;  //pick biru
  cp[3] = 26;  //drop biru
  cp[4] = 34;  //pick oren
  cp[5] = 44;  //otw lilin

  ctr = start_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_lilin_spd(ctr);
}

void plan4() {
  int ctr = 0;
  cp[1] = 3;   //pick ungu
  cp[2] = 15;  //otw oren
  cp[3] = 20;  //pick oren
  cp[4] = 36;  //pick biru
  cp[5] = 42;  //drop biru
  //cp[6] = 43;  //otw  liin

  ctr = start_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_lilin_spd(ctr);
}

void plan5() {
  int ctr = 0;
  cp[1] = 6;   //pick oren
  cp[2] = 14;  //otw biru
  cp[3] = 22;  //pick biru
  cp[4] = 28;  //drop biru
  cp[5] = 39;  //pick ungu
  cp[6] = 57;  //otw  lilin

  ctr = start_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_lilin_spd(ctr);
}

void plan6() {
  int ctr = 0;
  cp[1] = 6;   //pick oren
  cp[2] = 16;  //otw ungu
  cp[3] = 23;  //pick ungu
  cp[4] = 40;  //pick biru
  cp[5] = 47;  //drop biru

  ctr = start_oren_spd(ctr);
  ctr = oren_spd(ctr);
  ctr = oren_ungu_spd(ctr);
  ctr = ungu_spd(ctr);
  ctr = ungu_biru_spd(ctr);
  ctr = biru_spd(ctr);
  ctr = biru_lilin_spd(ctr);
}
