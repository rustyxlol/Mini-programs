#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxB_x;
    int maxB_y;
    string depart;
    string actions;
    char directions[] = {'N', 'E','S','W'};
    cout<<"Input x boundary: ";
    cin>>maxB_x;
    cout<<"Input y boundary: ";
    cin>>maxB_y;

    cout<<"Input departure: ";
    cin>>depart;
    fflush(stdin);


    int depart_x = depart[0] - '0';
    int depart_y = depart[2] - '0';
    int current_dir;

    if(depart[4] == 'N')
        current_dir = 0;
    if(depart[4] == 'E')
        current_dir = 1;
    if(depart[4] == 'S')
        current_dir = 2;
    if(depart[4] == 'W')
        current_dir = 3;


    cout<<"Input sequence of actions: ";
    getline(cin,actions);


    int current_x=depart_x;
    int current_y=depart_y;

    for(int i=0;i<=actions.length();i++)
    {
        if(actions[i] == 'R'){
                    current_dir = current_dir + 1 % 4;
        }

        if(actions[i] == 'L'){
                    current_dir = current_dir - 1 % 4;
        }

        if(actions[i] == 'M')
        {
            if(current_dir == 0){
                current_y += 2;
            }
            if(current_dir == 2){
                current_y -= 2;
            }
            if(current_dir == 1){
                current_x += 2;
            }
            if(current_dir == 4){
                current_x -= 2;
            }
        }

        if(actions[i] == 'm')
        {
            if(current_dir == 0){
                current_y ++ ;
            }
            if(current_dir == 2){
                current_y --;
            }
            if(current_dir == 1){
                current_x ++;
            }
            if(current_dir == 4){
                current_x --;
            }
        }
        if(current_x > maxB_x || current_y > maxB_y)
            break;
    }
    if(current_x > maxB_x || current_y > maxB_y)
        cout<<current_x<<"-"<<current_y<<"-"<<directions[current_dir]<<"-ER";
    else
        cout<<current_x<<"-"<<current_y<<"-"<<directions[current_dir];
}
