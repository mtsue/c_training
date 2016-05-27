/*　半径r,高さhを入力し、その円柱及び円錐の体積を求めよ。
    ただし、r, hは実数、円周率は3.1415926535とし、少数第5位まで出力する  */
/*  円柱 V = PI * r * r * h
    円錐 V = PI * r * r * h /3  */
    
#include<stdio.h>
int main(void){
    /*  変数宣言  */
    float r, h;    //実数型変数r, hの宣言
    float pi = 3.1415926535;    //円周率piの宣言（初期化）
    
    /*  r, hの入力  */
    printf("r --> ");
    scanf("%f", &r);
    printf("h --> ");
    scanf("%f", &h);
    
    /*  体積の計算  */
    float vt = pi * r * r * h;    //vt(円柱の体積)
    float vs = pi * r * r * h / 3;    //vs(円錐の体積)
    
    /*  vt, vsの表示  */
    printf("円柱V = %.5f\n", vt);
    printf("円錐V = %.5f", vs);
    
    return 0;
}