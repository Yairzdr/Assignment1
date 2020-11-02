//
// Created by Yairzdr on 01/11/2020.
//
#include "../include/Session.h"
// simple constructor

// destructor

// copy constructor

// copy assignment operator

// move constructor

// move assignment operator

// this function triggers the session
void Session::simulate() {

}

// this function adds an agent
void Session::addAgent(const Agent &agent) {
    // what do we add, how to insert?
}

void Session::setGraph(const Graph &graph) {//Setter
    g = graph;
}

void Session::enqueueInfected(int) {//hmm? where is the infected queue?

}

int Session::dequeueInfected() {//where is the infected queue?
    return 0;
}

// returns the TreeType Cycle/MaxRank/Root
TreeType Session::getTreeType() const{
    return treeType;
}


