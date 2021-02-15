#include<cstdlib>
#include<stdlib.h>
#include<iostream>
#include <string>
#include<conio.h>
#include <time.h>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void drawBox()
{
    cout<<"\t\t     |       |       "<<endl;
    cout<<"\t\t  "<<board[0][0]<<"  |   "<<board[0][1]<<"   |   "<<board[0][2]<<"   "<<endl;
    cout<<"\t\t_____|_______|_____ "<<endl;
    cout<<"\t\t     |       |       "<<endl;
    cout<<"\t\t  "<<board[1][0]<<"  |   "<<board[1][1]<<"   |   "<<board[1][2]<<"   "<<endl;
    cout<<"\t\t_____|_______|_____ "<<endl;
    cout<<"\t\t     |       |       "<<endl;
    cout<<"\t\t  "<<board[2][0]<<"  |   "<<board[2][1]<<"   |   "<<board[2][2]<<"   "<<endl;
    cout<<"\t\t     |       |       "<<endl;
}


int computer_turn()
{
    return rand() % 9 + 1;
}

void take_input(int turn, bool computer)
{
    int input;
    cout<<endl;


    if(turn % 2 == 0){
        cout<<"\tPLAYER 1'S TURN"<<endl;
        cout<<"\tEnter Cell:";
        cin>>input;
    }
    else if(computer == true)
    {
        cout<<"\tCOMPUTERS'S TURN"<<endl;
        input = computer_turn();
        cout<<"\tComputer chose : "<<input<<endl;

    }
    else{
        cout<<"\tPLAYER 2'S TURN"<<endl;
        cout<<"\tEnter Cell:";
        cin>>input;
    }


    if(input > 9)
    {
        cout<<"\tINVALID MOVE"<<endl;
        take_input(turn,computer);
    }

    switch(input)
    {
        case 1:
                if(isdigit(board[0][0]))
                    (turn%2 == 0) ? board[0][0] = 'X' : board[0][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 2:
                if(isdigit(board[0][1]))
                    (turn%2 == 0) ? board[0][1] = 'X' : board[0][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 3:
                if(isdigit(board[0][2]))
                    (turn%2 == 0) ? board[0][2] = 'X' : board[0][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 4:
                if(isdigit(board[1][0]))
                    (turn%2 == 0) ? board[1][0] = 'X' : board[1][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 5:
                if(isdigit(board[1][1]))
                    (turn%2 == 0) ? board[1][1] = 'X' : board[1][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 6:
                if(isdigit(board[1][2]))
                    (turn%2 == 0) ? board[1][2] = 'X' : board[1][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 7:
                if(isdigit(board[2][0]))
                    (turn%2 == 0) ? board[2][0] = 'X' : board[2][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 8:
                if(isdigit(board[2][1]))
                    (turn%2 == 0) ? board[2][1] = 'X' : board[2][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;


        case 9:
                if(isdigit(board[2][2]))
                    (turn%2 == 0) ? board[2][2] = 'X' : board[2][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn,computer);
                }
                break;

    }
}

int check_winner(int turn)
{
    int player = (turn % 2 == 0)?1:2;

    if(board[0][0]== 'X' && board[1][1] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][0]== 'O' && board[1][1] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}

    if(board[0][2]== 'X' && board[1][1] == 'X' && board[2][0] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][2]== 'O' && board[1][1] == 'O' && board[2][0] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}



    if(board[0][0]== 'X' && board[0][1] == 'X' && board[0][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][0]== 'O' && board[0][1] == 'O' && board[0][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}

    if(board[1][0]== 'X' && board[1][1] == 'X' && board[1][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[1][0]== 'O' && board[1][1] == 'O' && board[1][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}

    if(board[2][0]== 'X' && board[2][1] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[2][0]== 'O' && board[2][1] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}



    if(board[0][0]== 'X' && board[1][0] == 'X' && board[2][0] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][0]== 'O' && board[1][0] == 'O' && board[2][0] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;}

    if(board[0][1]== 'X' && board[1][1] == 'X' && board[2][1] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][1]== 'O' && board[1][1] == 'O' && board[2][1] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;}

    if(board[0][2]== 'X' && board[1][2] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 1;}
    if(board[0][2]== 'O' && board[1][2] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;return 2;}
}

int main()
{
    int turn=0,choice;
    bool computer = true;
    srand(time(NULL));
    cout<<"\t\tWelcome to Tic-Tac-Toe"<<endl;
    cout<<"\t\tPlay against"<<endl;
    cout<<"\t\t1. Player"<<endl;
    cout<<"\t\t2. Computer"<<endl;
    cout<<"\t\tEnter choice: ";
    cin>>choice;
    if(choice == 1)
        computer=false;

    drawBox();
    for(int i=0;i<9;i++,turn++)
    {
        take_input(turn,computer);
        drawBox();
        if(check_winner(turn) == 1)
            return 0;
        if(check_winner(turn) == 2)
            return 0;
    }
    cout<<"\t IT'S A DRAW"<<endl;
}
