//
// Created by dcamachog1501 on 15/03/19.
//

#include "PlayerList.h"

PlayerList::PlayerList() 
{
    
    this->length=0;
    this->head= nullptr;
    this->limit=new int(0);
        
    
}
int PlayerList::getLength()
{
    return *this->length;
}
bool PlayerList::add(Player p)
{
    if(*length<*limit) {
        NodeP *n = new NodeP(p);
        NodeP *temp = this->head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(n);
        return true;
    }
    return false;

}
void PlayerList::del(int i)
{
    if(length!=0) {
        if (*head->getValue()->getID() == i) {
            NodeP*temp = head;
            head = temp->getNext();
            delete temp;

        }
        else {
            NodeP *temp = this->head;
            while (*temp->getNext()->getValue()->getID()!= i && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                NodeP *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                delete temp2;
            }
        }
        length--;
    }
}
Player* PlayerList::get(int i)
{
    NodeP* temp=head;
    while(*temp->getValue()->getID()!=i)
    {
        temp=temp->getNext();
    }
    return temp->getValue();
}
 NodeP* PlayerList::getHead()
 {
    return this->head;
 }
 void PlayerList::setLimit(int i)
 {
    *limit=i;
 }