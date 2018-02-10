//定義一覧
//ボタン番号定義一覧
#define HORN1 1
#define HORN2 2
#define MUSICHORN 3
#define CONSTANTSPEED 4
#define ATS_S 5
#define ATS_A1 6
#define ATS_A2 7
#define ATS_B1 8
#define ATS_B2 9
#define ATS_C1 10
#define ATS_C2 11
#define ATS_D 12
#define ATS_E 13
#define ATS_F 14
#define ATS_G 15
#define ATS_H 16
#define ATS_I 17
#define ATS_J 18
#define ATS_K 19
#define ATS_L 20
//定義終了

#ifndef _GIPI_H
#define _GIPI_H

void ButtonSet(int, int[], int[]);//個数、ピン番号、役割
void ButtonRead();//全部Readする
void ButtonRead(int);//指定された番号だけReadする
void ButtonRead(int, int);//ボタン番号、役割

void RevPinSet(int, int);//レバー サー、マスコン
void RevPinSet(int, int, int);//レバーサー、力行ハンドル、制動ハンドル
void RevPinSet(int, int, int, int);//レバーサー、力行ハンドル、制動ハンドル、抑速ハンドル
void RevPinValue(int[], int[]);
void RevPinValue(int[], int[], int[]);
void RevPinValue(int[], int[], int[], int[]);
void masconhand();
void brcom(int);
void nocom(int);
void reverser();
void ave();
#endif
