//
// Created by dcamachog1501 on 09/03/19.
//
#include"../../Client/Client.h"
#include "Manager.h"
#include "../JSON_Logic/JSONManager.h"
#include <thread>
using namespace std;

Manager::Manager()
{
    code=new string("");
    assigned=new bool(false);
    cliente=new Client();
    running=new bool(true);
    Jmanager=new JSONManager();
    NewG_LW=new NewGame_LW(cliente,Jmanager);
    JoinG_LW=new JoinGame_LW(cliente,Jmanager);

    Init();


};
void Manager::Init()
{
    this->players= new PlayerList();
    cliente->run();
    bool tr= true;
    while(running)
    {
        if(cliente->isConnected())
        {

            if(tr)
            {
                this->NewG_LW->newGame();
                this->setCode(cliente->receiveMessage());
                //this->JoinG_LW->join();
                tr=false;
            }

        }
    }
}

PlayerList* Manager::getPlayers() {
    return this->players;
}

void Manager::setCode(string s) {
    if(!*assigned)
    {
        *code=s.substr(0,s.size()-1);
        *assigned=true;
        cout<<"Assigned code: "<<*code<<endl;
    }


}
