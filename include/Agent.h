#ifndef AGENT_H_
#define AGENT_H_

#include <vector>
#include "Session.h"//was added by Yair

class Agent{
public:
    Agent(Session& session);
    
    virtual void act()=0;
private:
    Session& session;
};//; by Yair

class ContactTracer: public Agent{
public:
    ContactTracer(Session& session);
    
    virtual void act();
};//; by Yair


class Virus: public Agent{
public:
    Virus(int nodeInd, Session& session);
    
    virtual void act();
private:
    const int nodeInd;
};//; by Yair

#endif
