#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int findZero(int *x){
    int i = 0;
    for(i = 0; i < 16; i++){
        if(x[i] == 0){
            return i;
        }
    }
}

void shaffle(int *x, int *y){
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}


void display(int *x){
    int i = 0;
    for(i = 0; i < 16; i++){
        printf("|%3d", x[i]);
        if(i % 4 == 3){
            printf("|\n");
        }
    }
    printf("-----------------\n");
}

int main(void){
    int ans[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
    int que[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
    int i = 0;
    
    srand(time(NULL));
    
    for(i = 0; i < 10000; i++){
        int zero = findZero(que);
        
        switch(rand()%4){
            case 0:
                if(!(0 <= zero && zero <= 3)){
                    shaffle(&que[zero], &que[zero-4]);
                }
                break;
            case 1:
                if(!(12 <= zero && zero <= 15)){
                    shaffle(&que[zero], &que[zero+4]);
                }
                break;
            case 2:
                if(zero % 4 != 0){
                    shaffle(&que[zero], &que[zero-1]);
                }
                break;
            case 3:
                if(zero % 4 != 3){
                    shaffle(&que[zero], &que[zero+1]);
                }
                break;
        }
    }
    display(que);
    
    while(1){
        char key = getchar();
        int zero = findZero(que);
        
        switch(key){
            case 'w':
                if(!(0 <= zero && zero <= 3)){
                    shaffle(&que[zero], &que[zero-4]);
                }
                break;
            case 's':
                if(!(12 <= zero && zero <= 15)){
                    shaffle(&que[zero], &que[zero+4]);
                }
                break;
            case 'a':
                if(zero % 4 != 0){
                    shaffle(&que[zero], &que[zero-1]);
                }
                break;
            case 'd':
                if(zero % 4 != 3){
                    shaffle(&que[zero], &que[zero+1]);
                }
                break;
        }
        display(que);
        
        int count = 0;
        for(i = 0; i < 16; i++){
            if(que[i] == ans[i]){
                count++;
            }
        }
        if(count == 16){
            break;
        }
    }
    
    printf("CLEAR!!\n");
}