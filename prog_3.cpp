#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
#define max 5

int push(char Song_list[max][100], int *top, char song[100])
{
      if(*top == max -1)
            return(-1);
      else
      {
            *top = *top + 1;
            strcpy(Song_list[*top], song);
            return(1);
      }
}

int pop(char Song_list[max][100], int *top, char song[100])
{
      if(*top == -1)
            return(-1);
      else
      {
            strcpy(song, Song_list[*top]);
            *top = *top - 1;
            return(1);
      }
}
int display(char Song_list[max][100], int *top, char song[100])
{
    if(*top == -1)
        return(-1);
    else
    {
        for(int i = *top;i>=0;i--)
        {
            strcpy(song, Song_list[*top]);
        }
        return(1);
    }
}
int play(char Song_list[max][100], int *top, char song[100])
{
    if(*top == -1)
        return(-1);
    else
    {
        strcpy(song, Song_list[*top]);
        return(1);
    }
}

int main()
{
    char Song_list[max][100],song[100];
    int top ,choice ,operation;
    top = -1;
    cout<<"\tMENU"<<endl;
    cout<<"\n----------------------------"<<endl;
    cout<<"      1. Add Song"<<endl;
    cout<<"      2. Delete Song"<<endl;
    cout<<"      3. Play Song"<<endl;
    cout<<"      4. EXIT"<<endl;
    cout<<"      5. Display Playlist"<<endl;
    cout<<"----------------------------"<<endl;
    while(1)
    {
        cout<<"Choose Operation :"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"Enter Song name to add :"<<endl;
                cin>>song;
                operation = push(Song_list,&top,song);
                if(operation == -1)
                {
                    cout<<endl;
                    cout<<" Song List is Full "<<endl;
                }
                else
                {
                    cout<<" Added in Song List."<<endl<<song;
                }
                break;
            }
        case 2:
            {
                operation = pop(Song_list,&top,song);
                if(operation == -1)
                {
                    cout<<"No Song in the list to be deleted."<<endl;
                }
                else
                {
                    cout<<"Song removed from List is : "<<endl<<song;
                    cout<<"\n";
                }
                break;
            }
        case 3:
            {
                operation = play(Song_list,&top,song);
                if(operation == -1)
                {
                    cout<<"No Song in the list to be played."<<endl;
                }
                else
                {
                    cout<<" Playing from Song List."<<endl<<song;
                }
                break;
            }
        case 4:
            {
                exit(0);
            }
        case 5:
            {
                operation = display(Song_list,&top,song);
                if(operation == -1)
                {
                    cout<<"No song in the Playlist to display."<<endl;
                }
                else
                {
                    cout<<"the songs in the Playlist."<<song<<endl;
                }
                break;
            }
        default:
            {
                cout<<"INVALID CHOICE ENTERED !!!"<<endl;
            }
        }
    }

    return 0;
}
