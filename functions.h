bool validation() {
  bool result = true;
  readString.trim();
  tempint = 0;

  while (result && tempint <= readString.length()) {
    if (readString[tempint] != 76 && readString[tempint] != 82 && readString[tempint] != 66 && readString[tempint] != 68 && readString[tempint] != 85 && readString[tempint] != 70) result = false;
    if (readString[tempint + 1] != 49 && readString[tempint + 1] != 50 && readString[tempint + 1] != 51) result = false;
    tempint = tempint + 3;
  }
  return result;
}
void hold_all()  {
  pwm.setPWM(5, 0, deg0_5);
  pwm.setPWM(7, 0, deg0_7);
  pwm.setPWM(4, 0, deg0_4);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
}

void left() {
  Serial.println("Left function");
  //hold_all();
  //  pwm.setPWM(4, 0, deg0_4 + 30);
  //  delay(delay1);
  pwm.setPWM(0, 0, deg90_0 + 20);
  delay(delay2);
  pwm.setPWM(0, 0, deg90_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg90_4);
  delay(delay1);
  pwm.setPWM(0, 0, deg0_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  delay(delay1);
}

void left_dash()  {
  Serial.println("Left Dash Function");
  //  hold_all();
  pwm.setPWM(4, 0, deg90_4);
  delay(delay1);
  pwm.setPWM(0, 0, deg90_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4 + 10);
  delay(delay1);
  pwm.setPWM(0, 0, deg0_0 - 30);
  delay(delay2);
  pwm.setPWM(0, 0, deg0_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  delay(delay1);
}

void right() {
  Serial.println("Right Function");
  hold_all();
  pwm.setPWM(2, 0, deg90_2 + 40);
  delay(delay1);
  pwm.setPWM(2, 0, deg90_2);
  delay(delay1);
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(2, 0, deg0_2);
  delay(delay1);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
}

void right_dash() {
  Serial.println("Right Dash Function");
  hold_all();
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(2, 0, deg90_2);
  delay(delay1);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
  pwm.setPWM(2, 0, deg0_2 - 40);
  delay(delay1);
  pwm.setPWM(2, 0, deg0_2);
  delay(delay1);
}

void top() {
  Serial.println("Top Function");
  hold_all();
  pwm.setPWM(5, 0, deg0_5 + 20);
  delay(delay1);
  pwm.setPWM(1, 0, deg90_1 + 20);
  delay(delay1);
  pwm.setPWM(1, 0, deg90_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg90_5);
  delay(delay1);
  pwm.setPWM(1, 0, deg0_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  delay(delay1);
}

void top_dash() {
  Serial.println("Top Dash Function");
  hold_all();
  pwm.setPWM(5, 0, deg90_5);
  delay(delay1);
  pwm.setPWM(1, 0, deg90_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5 + 20);
  delay(delay1);
  pwm.setPWM(1, 0, deg0_1 - 20);
  delay(delay1);
  pwm.setPWM(1, 0, deg0_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  delay(delay1);
}

void down() {
  Serial.println("Down Function");
  hold_all();
  pwm.setPWM(7, 0, deg0_7 + 20);
  delay(delay1);
  pwm.setPWM(3, 0, deg90_3 + 20);
  delay(delay1);
  pwm.setPWM(3, 0, deg90_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(3, 0, deg0_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
}

void down_dash() {
  Serial.println("Down Dash Function");
  hold_all();
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(3, 0, deg90_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg0_7 + 20);
  delay(delay1);
  pwm.setPWM(3, 0, deg0_3 - 20);
  delay(delay1);
  pwm.setPWM(3, 0, deg0_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
}

void test1() {
  Serial.println("Test Function");
  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(1, 0, deg270_1l);
  pwm.setPWM(3, 0, deg90_3l);
  delay(delay1);


}
void rotate_right() {
  Serial.println("Rotate Right Function");
  hold_all();
  pwm.setPWM(5, 0, deg90_5);
  delay(delay1);
  pwm.setPWM(1, 0, deg90_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  delay(delay1);
  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(1, 0, deg0_1);
  pwm.setPWM(3, 0, deg90_3);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(3, 0, deg0_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);

}

void rotate_left() {
  Serial.println("Rotate Left Function");
  hold_all();
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(3, 0, deg90_3);
  delay(delay1);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(1, 0, deg90_1);
  pwm.setPWM(3, 0, deg0_3);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
  pwm.setPWM(5, 0, deg90_5);
  delay(delay1);
  pwm.setPWM(1, 0, deg0_1);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  delay(delay1);
}

void rotate_up() {
  Serial.println("Rotate Up Function");
  hold_all();
  pwm.setPWM(4, 0, deg90_4);
  delay(delay1);
  pwm.setPWM(0, 0, deg90_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  delay(delay1);
  pwm.setPWM(5, 0, deg90_5);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(0, 0, deg0_0);
  pwm.setPWM(2, 0, deg90_2);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(2, 0, deg0_2);
  delay(delay1);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
}

void rotate_down() {
  Serial.println("Rotate Down Function");
  hold_all();
  pwm.setPWM(6, 0, deg90_6);
  delay(delay1);
  pwm.setPWM(2, 0, deg90_2);
  delay(delay1);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
  pwm.setPWM(5, 0, deg90_5);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  pwm.setPWM(0, 0, deg90_0);
  pwm.setPWM(2, 0, deg0_2);
  delay(delay1);
  pwm.setPWM(5, 0, deg0_5);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
  pwm.setPWM(4, 0, deg90_4);
  delay(delay1);
  pwm.setPWM(0, 0, deg0_0);
  delay(delay1);
  pwm.setPWM(4, 0, deg0_4);
  delay(delay1);

}

void front()  {
  Serial.println("Front Function");
  hold_all();
  rotate_up();
  top();
  rotate_down();
}

void front2()  {
  Serial.println("Front Function");
  hold_all();
  rotate_up();
  top();
  top();
  rotate_down();
}

void front_dash()  {
  Serial.println("Front Dash Function");
  hold_all();
  rotate_up();
  top_dash();
  rotate_down();

}

void hold_LR()  {
  pwm.setPWM(4, 0, deg0_4);
  pwm.setPWM(6, 0, deg0_6);
  delay(delay1);
  pwm.setPWM(5, 0, deg90_5);
  pwm.setPWM(7, 0, deg90_7);

  delay(delay1);
}

void hold_UpDown()  {
  pwm.setPWM(5, 0, deg0_5);
  pwm.setPWM(7, 0, deg0_7);
  delay(delay1);
  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(6, 0, deg90_6);

  delay(delay1);
}

void back() {
  rotate_down();
  top();
  rotate_up();
}

void back2() {
  rotate_down();
  top();
  top();
  rotate_up();
}

void back_dash() {
  rotate_down();
  top_dash();
  rotate_up();
}

void is_solved() {
  if (strcmp(u, "WWWWWWWWW") == 0 && strcmp(f, "GGGGGGGGG") == 0 && strcmp(l, "OOOOOOOOO") == 0 && strcmp(r, "RRRRRRRRR") == 0 && strcmp(b1, "BBBBBBBBB") == 0 && strcmp(d, "YYYYYYYYY") == 0) Serial.println("*****************************************SOLVED********************************");
}

void print_pos() {
  Serial.print("   ");
  Serial.print(u[0]);
  Serial.print(u[1]);
  Serial.print(u[2]);
  Serial.println("");
  Serial.print("   ");
  Serial.print(u[3]);
  Serial.print(u[4]);
  Serial.print(u[5]);
  Serial.println("");
  Serial.print("   ");
  Serial.print(u[6]);
  Serial.print(u[7]);
  Serial.print(u[8]);
  Serial.println("");

  Serial.print(l[0]);
  Serial.print(l[1]);
  Serial.print(l[2]);
  Serial.print(f[0]);
  Serial.print(f[1]);
  Serial.print(f[2]);
  Serial.print(r[0]);
  Serial.print(r[1]);
  Serial.print(r[2]);
  Serial.print(b1[8]);
  Serial.print(b1[7]);
  Serial.print(b1[6]);
  Serial.println("");

  Serial.print(l[3]);
  Serial.print(l[4]);
  Serial.print(l[5]);
  Serial.print(f[3]);
  Serial.print(f[4]);
  Serial.print(f[5]);
  Serial.print(r[3]);
  Serial.print(r[4]);
  Serial.print(r[5]);
  Serial.print(b1[5]);
  Serial.print(b1[4]);
  Serial.print(b1[3]);
  Serial.println("");

  Serial.print(l[6]);
  Serial.print(l[7]);
  Serial.print(l[8]);
  Serial.print(f[6]);
  Serial.print(f[7]);
  Serial.print(f[8]);
  Serial.print(r[6]);
  Serial.print(r[7]);
  Serial.print(r[8]);
  Serial.print(b1[2]);
  Serial.print(b1[1]);
  Serial.print(b1[0]);
  Serial.println("");

  Serial.print("   ");
  Serial.print(d[0]);
  Serial.print(d[1]);
  Serial.print(d[2]);
  Serial.println("");
  Serial.print("   ");
  Serial.print(d[3]);
  Serial.print(d[4]);
  Serial.print(d[5]);
  Serial.println("");
  Serial.print("   ");
  Serial.print(d[6]);
  Serial.print(d[7]);
  Serial.print(d[8]);
  Serial.println("");
}

void g_c() {
  x[6] = u[6];
  x[7] = u[7];
  x[8] = u[8];
  u[6] = l[8];
  u[7] = l[5];
  u[8] = l[2];
  l[2] = d[0];
  l[5] = d[1];
  l[8] = d[2];
  d[2] = r[0];
  d[1] = r[3];
  d[0] = r[6];
  r[0] = x[6];
  r[3] = x[7];
  r[6] = x[8];
  for (int i = 0; i < 9; i++) {
    x[i] = f[i];
  }
  f[0] = x[6];
  f[1] = x[3];
  f[2] = x[0];
  f[3] = x[7];
  f[5] = x[1];
  f[6] = x[8];
  f[7] = x[5];
  f[8] = x[2];
}

void g_a() {
  x[6] = u[6];
  x[7] = u[7];
  x[8] = u[8];
  u[6] = r[0];
  u[7] = r[3];
  u[8] = r[6];
  r[0] = d[2];
  r[3] = d[1];
  r[6] = d[0];
  d[0] = l[2];
  d[1] = l[5];
  d[2] = l[8];
  l[8] = x[6];
  l[5] = x[7];
  l[2] = x[8];
  for (int i = 0; i < 9; i++) {
    x[i] = f[i];
  }
  f[0] = x[2];
  f[1] = x[5];
  f[2] = x[8];
  f[3] = x[1];
  f[5] = x[7];
  f[6] = x[0];
  f[7] = x[3];
  f[8] = x[6];
}

void w_c() {
  x[6] = b1[6];
  x[7] = b1[7];
  x[8] = b1[8];
  b1[6] = l[2];
  b1[7] = l[1];
  b1[8] = l[0];
  l[0] = f[0];
  l[1] = f[1];
  l[2] = f[2];
  f[0] = r[0];
  f[1] = r[1];
  f[2] = r[2];
  r[0] = x[8];
  r[1] = x[7];
  r[2] = x[6];
  for (int i = 0; i < 9; i++) {
    x[i] = u[i];
  }
  u[0] = x[6];
  u[1] = x[3];
  u[2] = x[0];
  u[3] = x[7];
  u[5] = x[1];
  u[6] = x[8];
  u[7] = x[5];
  u[8] = x[2];
}

void w_a() {
  x[6] = b1[6];
  x[7] = b1[7];
  x[8] = b1[8];
  b1[6] = r[2];
  b1[7] = r[1];
  b1[8] = r[0];
  r[0] = f[0];
  r[1] = f[1];
  r[2] = f[2];
  f[0] = l[0];
  f[1] = l[1];
  f[2] = l[2];
  l[0] = x[8];
  l[1] = x[7];
  l[2] = x[6];
  for (int i = 0; i < 9; i++) {
    x[i] = u[i];
  }
  u[0] = x[2];
  u[1] = x[5];
  u[2] = x[8];
  u[3] = x[1];
  u[5] = x[7];
  u[6] = x[0];
  u[7] = x[3];
  u[8] = x[6];
}

void r_c() {
  x[8] = u[8];
  x[5] = u[5];
  x[2] = u[2];
  u[8] = f[8];
  u[5] = f[5];
  u[2] = f[2];
  f[8] = d[8];
  f[5] = d[5];
  f[2] = d[2];
  d[2] = b1[2];
  d[5] = b1[5];
  d[8] = b1[8];
  b1[2] = x[2];
  b1[5] = x[5];
  b1[8] = x[8];
  for (int i = 0; i < 9; i++) {
    x[i] = r[i];
  }
  r[0] = x[6];
  r[1] = x[3];
  r[2] = x[0];
  r[3] = x[7];
  r[5] = x[1];
  r[6] = x[8];
  r[7] = x[5];
  r[8] = x[2];
}

void r_a() {
  x[8] = u[8];
  x[5] = u[5];
  x[2] = u[2];
  u[8] = b1[8];
  u[5] = b1[5];
  u[2] = b1[2];
  b1[2] = d[2];
  b1[5] = d[5];
  b1[8] = d[8];
  d[2] = f[2];
  d[5] = f[5];
  d[8] = f[8];
  f[8] = x[8];
  f[5] = x[5];
  f[2] = x[2];
  for (int i = 0; i < 9; i++) {
    x[i] = r[i];
  }
  r[0] = x[2];
  r[1] = x[5];
  r[2] = x[8];
  r[3] = x[1];
  r[5] = x[7];
  r[6] = x[0];
  r[7] = x[3];
  r[8] = x[6];
}

void o_c() {
  x[0] = u[0];
  x[3] = u[3];
  x[6] = u[6];
  u[0] = b1[0];
  u[3] = b1[3];
  u[6] = b1[6];
  b1[0] = d[0];
  b1[3] = d[3];
  b1[6] = d[6];
  d[0] = f[0];
  d[3] = f[3];
  d[6] = f[6];
  f[0] = x[0];
  f[3] = x[3];
  f[6] = x[6];
  for (int i = 0; i < 9; i++) {
    x[i] = l[i];
  }
  l[0] = x[6];
  l[1] = x[3];
  l[2] = x[0];
  l[3] = x[7];
  l[5] = x[1];
  l[6] = x[8];
  l[7] = x[5];
  l[8] = x[2];
}

void o_a() {
  x[0] = u[0];
  x[3] = u[3];
  x[6] = u[6];
  u[0] = f[0];
  u[3] = f[3];
  u[6] = f[6];
  f[0] = d[0];
  f[3] = d[3];
  f[6] = d[6];
  d[0] = b1[0];
  d[3] = b1[3];
  d[6] = b1[6];
  b1[0] = x[0];
  b1[3] = x[3];
  b1[6] = x[6];
  for (int i = 0; i < 9; i++) {
    x[i] = l[i];
  }
  l[0] = x[2];
  l[1] = x[5];
  l[2] = x[8];
  l[3] = x[1];
  l[5] = x[7];
  l[6] = x[0];
  l[7] = x[3];
  l[8] = x[6];
}

void y_c() {
  x[6] = f[6];
  x[7] = f[7];
  x[8] = f[8];
  f[6] = l[6];
  f[7] = l[7];
  f[8] = l[8];
  l[6] = b1[2];
  l[7] = b1[1];
  l[8] = b1[0];
  b1[0] = r[8];
  b1[1] = r[7];
  b1[2] = r[6];
  r[6] = x[6];
  r[7] = x[7];
  r[8] = x[8];
  for (int i = 0; i < 9; i++) {
    x[i] = d[i];
  }
  d[0] = x[6];
  d[1] = x[3];
  d[2] = x[0];
  d[3] = x[7];
  d[5] = x[1];
  d[6] = x[8];
  d[7] = x[5];
  d[8] = x[2];
}

void y_a() {
  x[6] = f[6];
  x[7] = f[7];
  x[8] = f[8];
  f[6] = r[6];
  f[7] = r[7];
  f[8] = r[8];
  r[6] = b1[2];
  r[7] = b1[1];
  r[8] = b1[0];
  b1[0] = l[8];
  b1[1] = l[7];
  b1[2] = l[6];
  l[6] = x[6];
  l[7] = x[7];
  l[8] = x[8];
  for (int i = 0; i < 9; i++) {
    x[i] = d[i];
  }
  d[0] = x[2];
  d[1] = x[5];
  d[2] = x[8];
  d[3] = x[1];
  d[5] = x[7];
  d[6] = x[0];
  d[7] = x[3];
  d[8] = x[6];
}

void b_c() {
  x[0] = u[0];
  x[1] = u[1];
  x[2] = u[2];
  u[0] = r[2];
  u[1] = r[5];
  u[2] = r[8];
  r[2] = d[8];
  r[5] = d[7];
  r[8] = d[6];
  d[6] = l[0];
  d[7] = l[3];
  d[8] = l[6];
  l[0] = x[2];
  l[3] = x[1];
  l[6] = x[0];
  for (int i = 0; i < 9; i++) {
    x[i] = b1[i];
  }
  b1[0] = x[6];
  b1[1] = x[3];
  b1[2] = x[0];
  b1[3] = x[7];
  b1[5] = x[1];
  b1[6] = x[8];
  b1[7] = x[5];
  b1[8] = x[2];
}

void b_a() {
  x[0] = u[0];
  x[1] = u[1];
  x[2] = u[2];
  u[0] = l[6];
  u[1] = l[3];
  u[2] = l[0];
  l[0] = d[6];
  l[3] = d[7];
  l[6] = d[8];
  d[6] = r[8];
  d[7] = r[5];
  d[8] = r[2];
  r[2] = x[0];
  r[5] = x[1];
  r[8] = x[2];
  for (int i = 0; i < 9; i++) {
    x[i] = b1[i];
  }
  b1[0] = x[2];
  b1[1] = x[5];
  b1[2] = x[8];
  b1[3] = x[1];
  b1[5] = x[7];
  b1[6] = x[0];
  b1[7] = x[3];
  b1[8] = x[6];
}


void mark_solved() {
  for (int i = 0; i < 9; i++) {
    u[i] = 'W';
    f[i] = 'G';
    l[i] = 'O';
    r[i] = 'R';
    b1[i] = 'B';
    d[i] = 'Y';
  }
  u[9] = '\0';
  f[9] = '\0';
  l[9] = '\0';
  r[9] = '\0';
  b1[9] = '\0';
  d[9] = '\0';
}

void bb(int* a, int* b) {
  int h[16];

  for (int i = 0; i < 16; i++) {
    h[i] = a[i];
  }

  for (int r = 0; r < 16; r++) {
    a[r] = c[h[e[r]]] ^ b[r];
  }
}




//decrypt function - Probudha

int* decrypt(int* c1, int lenth) {
  int e1[lenth];
  for (int h = 0; h < 16; h++) {
    e1[h] = key[h + 160];
    c1[h] ^= e1[h];
  }

  for (int e2 = 144; e2 >= 16; e2 -= 16) {
    int e3[16];
    for (int i = 0; i < 16; i++) {
      e3[i] = key[e2 + i];
    }
    bb(c1, e3);
    int* h = c1;

    for (int r = 0; r < 16; r += 4) {
      int Na = h[r + 0];
      int x = h[r + 1];
      int y = h[r + 2];
      int Wa = h[r + 3];

      int Ua = Na ^ x ^ y ^ Wa;
      int z = aaa[Ua];
      int Ta = aaa[aaa[z ^ Na ^ y]] ^ Ua;
      Ua ^= aaa[aaa[z ^ x ^ Wa]];
      h[r + 0] = h[r + 0] ^ Ta ^ aaa[Na ^ x];
      h[r + 1] = h[r + 1] ^ Ua ^ aaa[x ^ y];
      h[r + 2] = h[r + 2] ^ Ta ^ aaa[y ^ Wa];
      h[r + 3] = h[r + 3] ^ Ua ^ aaa[Wa ^ Na];
    }
  }

  bb(c1, key);
  return c1;
}



//a function - Probudha

int* aa(int* intinput1) {
  //  Serial.print("Start of aa, b=");
  for (int c = 0; c < 20; c++) {
    b[c] = intinput1[c];
    //    Serial.print(b[c]);
    //    Serial.print(" ");
  }
  //  Serial.println("");

  if (20 > 16) {
    int e = 20 - 16;
    int tempint[16];
    for (int i = 0; i < 16; i++) {
      tempint[i] = b[i + 4];
    }
    int* f = decrypt(tempint, 16);

    for (int c = 0; c < 16; c++) {
      b[c + e] = f[c] ^ static_cast<int>(a[c]);
    }
  }

  decrypt(b, 20);

  for (int c = 0; c < 16; c++) {
    b[c] ^= static_cast<int>(a[c]);

  }

  return b;
}

//cb function - Probudha
void cb(int* b1) {
  String binaryString = "";
  for (int e = 0; e < 20; e++) {
    b1[e] = (b1[e] + 256);
    binaryString += String(b1[e], BIN).substring(1);
  }
  //Serial.print("BinalyString=");
  //Serial.println(binaryString);

  // Convert the binary string to hex
  String hexdata = "";
  for (int temp = 0; temp < 40; temp++) {
    int startIndex = temp * 4;
    int endIndex = startIndex + 4;
    hexdata += String(strtoul(binaryString.substring(startIndex, endIndex).c_str(), NULL, 2), HEX);
  }
  //  Serial.println(hexdata);

  // Extract color and direction information
  String color1 = hexdata.substring(3, 4);
  String direction2;

  if (color1 == "0") color1 = "White";
  else if (color1 == "1") color1 = "Red";
  else if (color1 == "2") color1 = "Green";
  else if (color1 == "3") color1 = "Yellow";
  else if (color1 == "4") color1 = "Orange";
  else if (color1 == "5") color1 = "Blue";

  int direction1 = strtoul(hexdata.substring(4, 5).c_str(), NULL, 16);
  if (direction1 < 8) direction2 = "Clockwise";
  else direction2 = "Anti-clockwise";

  // Display the result
  //  Serial.print(color1);
  //  Serial.print(" - ");
  //  Serial.println(direction2);

  if (color1 == "White" && direction2 == "Clockwise") w_c();
  else if (color1 == "White" && direction2 == "Anti-clockwise") w_a();
  else if (color1 == "Red" && direction2 == "Clockwise") r_c();
  else if (color1 == "Red" && direction2 == "Anti-clockwise") r_a();
  else if (color1 == "Green" && direction2 == "Clockwise") g_c();
  else if (color1 == "Green" && direction2 == "Anti-clockwise") g_a();
  else if (color1 == "Yellow" && direction2 == "Clockwise") y_c();
  else if (color1 == "Yellow" && direction2 == "Anti-clockwise") y_a();
  else if (color1 == "Orange" && direction2 == "Clockwise") o_c();
  else if (color1 == "Orange" && direction2 == "Anti-clockwise") o_a();
  else if (color1 == "Blue" && direction2 == "Clockwise") b_c();
  else if (color1 == "Blue" && direction2 == "Anti-clockwise") b_a();

  print_pos();
  is_solved();

}

// CALLBACKS
/**
   Callbacks for devices found via a Bluetooth scan of advertised devices
*/
class AdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
    // The onResult callback is called for every advertised device found by the scan
    void onResult(BLEAdvertisedDevice advertisedDevice) {
      // Print the MAC address of this device
      Serial.print(" - ");
      Serial.print(advertisedDevice.getAddress().toString().c_str());
      // Does this device match the MAC address we're looking for?
      if (advertisedDevice.getAddress().equals(*pServerAddress)) {
        // Stop scanning for further devices
        advertisedDevice.getScan()->stop();
        // Create a new device based on properties of advertised device
        myDevice = new BLEAdvertisedDevice(advertisedDevice);
        // Set flag
        deviceFound = true;
        Serial.println(F(" - Connecting!"));
      }
      else {
        Serial.println(F("... MAC address does not match"));
      }
    }
};

/**
   Callbacks for device we connect to
*/
class ClientCallbacks : public BLEClientCallbacks {
    // Called when a new connection is established
    void onConnect(BLEClient* pclient) {
      digitalWrite(LED_BUILTIN, HIGH);
      connected = true;
    }
    // Called when a connection is lost
    void onDisconnect(BLEClient* pclient) {
      digitalWrite(LED_BUILTIN, LOW);
      connected = false;
    }
};

/**
   Called whenever a notication is received that the tracked BLE characterisic has changed
*/
static void notifyCallback(BLERemoteCharacteristic* pBLERemoteCharacteristic, uint8_t* pData, size_t length, bool isNotify) {
  for (int i = 0; i < 20; i++) {
    intinput[i] = pData[i];
    //    Serial.print(pData[i], HEX);
    //    Serial.print(" ");
  }

  cb(aa(intinput));
}

/*
   Connect to the BLE server of the correct MAC address
*/
bool connectToServer() {
  Serial.print(F("Creating BLE client... "));
  BLEClient* pClient = BLEDevice::createClient();
  delay(500);
  Serial.println(F("Done."));

  Serial.print(F("Assigning callbacks... "));
  pClient->setClientCallbacks(new ClientCallbacks());
  delay(500);
  Serial.println(F(" - Done."));

  // Connect to the remove BLE Server.
  Serial.print(F("Connecting to "));
  Serial.print(myDevice->getAddress().toString().c_str());
  Serial.print(F("... "));
  pClient->connect(myDevice);
  delay(500);
  Serial.println(" - Done.");

  // Obtain a reference to the service we are after in the remote BLE server.
  Serial.print(F("Finding service "));
  Serial.print(serviceUUID.toString().c_str());
  Serial.print(F("... "));
  BLERemoteService* pRemoteService = pClient->getService(serviceUUID);
  delay(500);
  if (pRemoteService == nullptr) {
    Serial.println(F("FAILED."));
    return false;
  }
  Serial.println(" - Done.");
  delay(500);

  // Obtain a reference to the characteristic in the service of the remote BLE server.
  Serial.print(F("Finding characteristic "));
  Serial.print(charUUID.toString().c_str());
  Serial.print(F("... "));
  pRemoteCharacteristic = pRemoteService->getCharacteristic(charUUID);
  if (pRemoteCharacteristic == nullptr) {
    Serial.println(F("FAILED."));
    return false;
  }
  Serial.println(" - Done.");
  delay(500);

  Serial.print(F("Registering for notifications... "));
  if (pRemoteCharacteristic->canNotify()) {
    pRemoteCharacteristic->registerForNotify(notifyCallback);
    Serial.println(" - Done.");
  }
  else {
    Serial.println(F("FAILED."));
    return false;
  }

  Serial.println("READY!");
  return true;
}

/**
   Search for any advertised devices
*/
void scanForDevices() {
  Serial.println("Scanning for Bluetooth devices...");
  // Retrieve a Scanner and set the callback we want to use to be informed when we
  // have detected a new device.  Specify that we want active scanning and start the
  // scan to run for 30 seconds.
  BLEScan* pBLEScan = BLEDevice::getScan();
  pBLEScan->setAdvertisedDeviceCallbacks(new AdvertisedDeviceCallbacks());
  pBLEScan->setActiveScan(true);
  pBLEScan->start(5);
}





void find_solution() {
  char curstate[55];
  curstate[0] = d[6];
  curstate[1] = d[3];
  curstate[2] = d[0];
  curstate[3] = d[7];
  curstate[4] = d[4];
  curstate[5] = d[1];
  curstate[6] = d[8];
  curstate[7] = d[5];
  curstate[8] = d[2];
  curstate[9] = f[8];
  curstate[10] = f[7];
  curstate[11] = f[6];
  curstate[12] = f[5];
  curstate[13] = f[4];
  curstate[14] = f[3];
  curstate[15] = f[2];
  curstate[16] = f[1];
  curstate[17] = f[0];
  curstate[18] = r[8];
  curstate[19] = r[7];
  curstate[20] = r[6];
  curstate[21] = r[5];
  curstate[22] = r[4];
  curstate[23] = r[3];
  curstate[24] = r[2];
  curstate[25] = r[1];
  curstate[26] = r[0];
  curstate[27] = u[2];
  curstate[28] = u[5];
  curstate[29] = u[8];
  curstate[30] = u[1];
  curstate[31] = u[4];
  curstate[32] = u[7];
  curstate[33] = u[0];
  curstate[34] = u[3];
  curstate[35] = u[6];
  curstate[36] = b1[0];
  curstate[37] = b1[1];
  curstate[38] = b1[2];
  curstate[39] = b1[3];
  curstate[40] = b1[4];
  curstate[41] = b1[5];
  curstate[42] = b1[6];
  curstate[43] = b1[7];
  curstate[44] = b1[8];
  curstate[45] = l[8];
  curstate[46] = l[7];
  curstate[47] = l[6];
  curstate[48] = l[5];
  curstate[49] = l[4];
  curstate[50] = l[3];
  curstate[51] = l[2];
  curstate[52] = l[1];
  curstate[53] = l[0];
  curstate[54] = '\0';;

  for (int i = 0; i < 54; i++) {
    if (curstate[i] == 'W') curstate[i] = 'D';
    else if (curstate[i] == 'B') curstate[i] = 'L';
    else if (curstate[i] == 'O') curstate[i] = 'B';
    else if (curstate[i] == 'R') curstate[i] = 'F';
    else if (curstate[i] == 'Y') curstate[i] = 'U';
    else if (curstate[i] == 'G') curstate[i] = 'R';
  }
  Serial.print("Current state=");
  Serial.println(curstate);

  Serial.print("Connecting to WiFi");
    WiFi.begin("DWR-932_20E573", "*****");
//  WiFi.begin("ASUS", "*****");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Connected to WiFi");

  String payload;

  Serial.print("Fetching solution from API");
  while (true) {
    HTTPClient http;

//    http.begin("http://192.168.1.94:8080/" + String(curstate));
    http.begin("http://192.168.0.47:8080/" + String(curstate));
    int httpCode = http.GET();
    Serial.print(".");
    if (httpCode == 200) {
      payload = http.getString();
      http.end();
      break;
    }
    http.end();
    delay(100);
  }
  int startPos = payload.indexOf("body>") + 5;
  int endPos = payload.indexOf("(", startPos);
  payload = payload.substring(startPos + 1, endPos);
  Serial.println("");
  Serial.print("->");
  Serial.print(payload);
  Serial.print("<-");

  int i = 0;
  while (i < payload.length() - 2) {
    if (payload[i + 1] == 51) {
      if (payload[i] == 'L') left_dash();
      else if (payload[i] == 'B') back_dash();
      else if (payload[i] == 'F') front_dash();
      else if (payload[i] == 'R') right_dash();
      else if (payload[i] == 'U') top_dash();
      else if (payload[i] == 'D') down_dash();
      //      i = i + 3;
    }
    else if (payload[i + 1] == 50 && payload[i] == 'B') {
      back2();
      //      i=i+3;
    }
    else if (payload[i + 1] == 50 && payload[i] == 'F') {
      front2();
      //      i=i+3;
    }
    else {
      for (tempint = 49; tempint <= payload[i + 1]; tempint++) {
        if (payload[i] == 'L') left();
        else if (payload[i] == 'B') back();
        else if (payload[i] == 'F') front();
        else if (payload[i] == 'R') right();
        else if (payload[i] == 'U') top();
        else if (payload[i] == 'D') down();
      }
    }
    i = i + 3;
  }

  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(5, 0, deg90_5);
  pwm.setPWM(6, 0, deg90_6);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  delay(delay1);
  delay(delay1);
  delay(delay1);

}

void home1()  {
  Serial.println("Home function");
  pwm.setPWM(4, 0, deg90_4);
  pwm.setPWM(5, 0, deg90_5);
  pwm.setPWM(6, 0, deg90_6);
  pwm.setPWM(7, 0, deg90_7);
  delay(delay1);
  delay(delay1);
  delay(delay1);
  delay(delay1);
  //  delay(delay1);
  //  delay(delay1);
  //  delay(delay1);
  pwm.setPWM(0, 0, deg0_0);
  pwm.setPWM(1, 0, deg0_1);
  pwm.setPWM(2, 0, deg0_2);
  pwm.setPWM(3, 0, deg0_3);
  delay(delay1);
  for (tempint = deg180; tempint >= deg0; tempint--)  {
    //    if (tempint >= deg0_4 && tempint <= deg90_4) pwm.setPWM(4, 0, tempint);
    //    if (tempint >= deg0_5 && tempint <= deg90_5) pwm.setPWM(5, 0, tempint);
    //    if (tempint >= deg0_6 && tempint <= deg90_6) pwm.setPWM(6, 0, tempint);
    if (tempint >= deg0_7 && tempint <= deg90_7) pwm.setPWM(7, 0, tempint);
    delay(10);
  }
  delay(delay1);
  for (tempint = deg180; tempint >= deg0; tempint--)  {
    if (tempint >= deg0_4 && tempint <= deg90_4) pwm.setPWM(4, 0, tempint);
    if (tempint >= deg0_5 && tempint <= deg90_5) pwm.setPWM(5, 0, tempint);
    if (tempint >= deg0_6 && tempint <= deg90_6) pwm.setPWM(6, 0, tempint);
    //    if (tempint >= deg0_7 && tempint <= deg90_7) pwm.setPWM(7, 0, tempint);
    delay(10);
  }
  //  find_solution();
}
