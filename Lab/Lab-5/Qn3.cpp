#include<iostream>
using namespace std;
class Player{
    protected:
        string name;
    
    public:
        Player(string n) : name(n){}

        void play(){
            cout<<name<<" is playing."<<endl;
        }
};
class Gamer{
    public:
        void playGame(){
            cout<<" Gamer is playing a game."<<endl;
        }
};
class GameTester : public Player, public Gamer{
    public:
        GameTester(string n) : Player(n){}

        void testGame(){
            cout<<name<<" is testing game."<<endl;
        }

};
int main(){
    GameTester gt("Andrew");
    gt.play();
    gt.playGame();
    gt.testGame();
    return 0;
}