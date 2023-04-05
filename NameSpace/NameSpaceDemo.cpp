#include<iostream>
using namespace std;

namespace OldSongs{
    void play(){
        cout<<"Old Songs Play";
    }
}

namespace NewSongs{
    void play(){
        cout<<"New Songs Play";
    }
}
using namespace OldSongs;

int main()
{
    play();
    NewSongs::play();
    return 0;
}