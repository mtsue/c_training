/*  月曜日から日曜日までの各曜日に1から7までの数字を対応させ、その番号を入力したらその曜日の英語を出力させる
    ただし、0を入力するまで繰り返し、0を入力したら「END」と出力し、終了する。
    e.g.
        1. 月曜日   2.火曜日    ....    7.日曜日    0.終了
        --> 1
        Monday
        1. 月曜日   ....
        --> 0
        END
*/

#include<stdio.h>
int main(void){
    /*  変数宣言  */
    int input = 8;    //入力した値を格納するための変数
                      //0 以外の数字で初期化しないと、whileの式（input != 0）が偽になってしまい、繰り返しが起こらない
                      //ここでは今回のプログラムで関係のない 8 で初期化する
    
    /*  input(入力値)が0でない場合繰り返す  */
    while(input != 0){
        
        /*  月曜日から日曜日までを表示  */
        printf("1.月曜日　2.火曜日  3.水曜日　4.木曜日　5.金曜日　6.土曜日　7.日曜日　0.終了\n");
        printf("-->");
        
        /*  inputに入力  */
        scanf("%d", &input);
        
        /*  inputの値によって処理を分ける  */
        switch(input){
            /*  inputが 1 の場合  */
            case 1:
            printf("Monday\n");    //Mondayを表示
            break;
            
            /*  inputが 2 の場合  */
            case 2:
                printf("Tuesday\n");    //Tuesdayを表示
                break;
                
            /*  inputが 3 の場合  */
            case 3:
                printf("Wednesday\n");    //Wednesdayを表示
                break;
                
            /*  inputが 4 の場合  */
            case 4:
                printf("Thursday\n");    //Thursdayを表示
                break;
                
            /*  inputが 5 の場合  */
            case 5:
                printf("Friday\n");    //Fridayを表示
                break;
                
            /*  inputが 6 の場合  */
            case 6:
                printf("Saturday\n");    //Saturdayを表示
                break;
                
            /*  inputが 7 の場合  */
            case 7:
                printf("Sunday\n");    //Sundayを表示
                break;
                
            /*  inputが 0 の場合  */
            case 0:
                printf("END\n");    //ENDを表示
                break;
        }
    }
    
    return 0;
}