//
//  main.c
//  ticTacToe.c
//
//  Created by Sanjhee Gupta on 12/3/20.
//  Copyright © 2020 Sanjhee Gupta. All rights reserved.


#include <stdio.h>

#define AL  3

void checkHorizontal(int gameBoard[][AL]){
    //checks if there is a horizontal strike
    for(int i = 0; i < AL; i++){
        int j;
        for(j = 0; j < AL; j++){
            if(gameBoard[i][j] == 0){
                break;
            }
        }
        if(j == AL){
            printf("woohoo!\n");
        }
    }
}

void checkVertical(int gameBoard[][AL]){
    //checks if there is a horizontal strike
    for(int i = 0; i < AL; i++){
        int j;
        for(j = 0; j < AL; j++){
            if(gameBoard[j][i] == 0){
                break;
            }
        }
        if(j == AL){
            printf("woohoo!\n");
        }
    }
}

void checkDiagnol(int gameBoard[][AL]){
    //check if there is a "\"
    if(gameBoard[0][0]){
        if(gameBoard[1][1]){
            if(gameBoard[2][2]){
                printf("woohoo!\n");
            }
        }
    }
    //check if there is a "/"
    if(gameBoard[0][2]){
        if(gameBoard[1][1]){
            if(gameBoard[2][0]){
                printf("woohooo!\n");
            }
        }
    }
}

void plays(int gameBoard[][AL], int row, int column){
    //changes 0 to 1 in 2D array to show that spot is filled
    gameBoard[row][column] = 1;
    printf("-------------------\n");
    for(int i = 0; i < AL; i++){
        for(int j = 0; j < AL; j++){
            printf("|  %d  ", gameBoard[i][j]);
        }
        printf("|\n-------------------\n");
    }
    checkHorizontal(gameBoard);
    checkVertical(gameBoard);
    checkDiagnol(gameBoard);
}

int main(int argc, const char * argv[]) {
    int row, column;
    int i = 0;
    int gameBoard[AL][AL] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    //lets the player play 9 times
    while(i < 9){
        printf("player 1, please enter a row ");
        scanf("%d", &row);
        printf("player 1, please enter a column ");
        scanf("%d", &column);
        row--;
        column--;
        plays(gameBoard, row, column);
     }
    return 0;
}
