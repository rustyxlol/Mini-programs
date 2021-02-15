
#include<iostream>
#include <string>
#include<conio.h>
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

void take_input(int turn)
{
    int input;
    cout<<endl;
    if(turn % 2 == 0)
        cout<<"\tPLAYER 1'S TURN"<<endl;
    else
        cout<<"\tPLAYER 2'S TURN"<<endl;
    cout<<"\t Enter Cell:";
    cin>>input;
    if(input > 9)
    {
        cout<<"\tINVALID MOVE"<<endl;
        take_input(turn);
    }

    switch(input)
    {
        case 1:
                if(isdigit(board[0][0]))
                    (turn%2 == 0) ? board[0][0] = 'X' : board[0][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 2:
                if(isdigit(board[0][1]))
                    (turn%2 == 0) ? board[0][1] = 'X' : board[0][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 3:
                if(isdigit(board[0][2]))
                    (turn%2 == 0) ? board[0][2] = 'X' : board[0][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 4:
                if(isdigit(board[1][0]))
                    (turn%2 == 0) ? board[1][0] = 'X' : board[1][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 5:
                if(isdigit(board[1][1]))
                    (turn%2 == 0) ? board[1][1] = 'X' : board[1][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 6:
                if(isdigit(board[1][2]))
                    (turn%2 == 0) ? board[1][2] = 'X' : board[1][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 7:
                if(isdigit(board[2][0]))
                    (turn%2 == 0) ? board[2][0] = 'X' : board[2][0] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 8:
                if(isdigit(board[2][1]))
                    (turn%2 == 0) ? board[2][1] = 'X' : board[2][1] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;


        case 9:
                if(isdigit(board[2][2]))
                    (turn%2 == 0) ? board[2][2] = 'X' : board[2][2] = 'O';
                else
                {
                    cout<<"\tINVALID MOVE"<<endl;
                    take_input(turn);
                }
                break;

    }
}

int check_winner(int turn)
{
    int player = (turn % 2 == 0)?1:2;

    if(board[0][0]== 'X' && board[1][1] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][0]== 'O' && board[1][1] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}

    if(board[0][2]== 'X' && board[1][1] == 'X' && board[2][0] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][2]== 'O' && board[1][1] == 'O' && board[2][0] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}



    if(board[0][0]== 'X' && board[0][1] == 'X' && board[0][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][0]== 'O' && board[0][1] == 'O' && board[0][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}

    if(board[1][0]== 'X' && board[1][1] == 'X' && board[1][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[1][0]== 'O' && board[1][1] == 'O' && board[1][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}

    if(board[2][0]== 'X' && board[2][1] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[2][0]== 'O' && board[2][1] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}



    if(board[0][0]== 'X' && board[1][0] == 'X' && board[2][0] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][0]== 'O' && board[1][0] == 'O' && board[2][0] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}

    if(board[0][1]== 'X' && board[1][1] == 'X' && board[2][1] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][1]== 'O' && board[1][1] == 'O' && board[2][1] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}

    if(board[0][2]== 'X' && board[1][2] == 'X' && board[2][2] == 'X' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 1;}
    if(board[0][2]== 'O' && board[1][2] == 'O' && board[2][2] == 'O' ){
            cout<<"\tPLAYER "<<player<<" WON"<<endl;
            return 2;}
}

int main()
{
    int turn=0;
    cout<<"\t\tWelcome to Tic-Tac-Toe"<<endl;
    drawBox();
    for(int i=0;i<9;i++,turn++)
    {
        take_input(turn);
        drawBox();
        int check=check_winner(turn);
        if(check == 1 || check == 2)
            return 0;
    }
    cout<<"\t IT'S A DRAW"<<endl;
}
