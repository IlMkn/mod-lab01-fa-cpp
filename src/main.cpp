// Copyright 2022 UNN-IASR
#include "fun.h"

int main() {
    const char* str1 = "      qe 1e 2 eqweqw 23132qweqweqwe eew2    q2  rrr   3   r      ";
    const char* str2 = "      Qe 1e 2 Eqweqw 23132qweqweqwe Eew2    q2  rRr   3   r      Rr2 ";
    const char* str3 = " ewtyg qwertf     ";
    cout << "faStr1 - " << faStr1(str1);
    cout << "\n";
    cout << "faStr2 - " << faStr2(str2);
    cout << "\n";
    cout << "faStr3 - " << faStr3(str3);
    return 0;
}
