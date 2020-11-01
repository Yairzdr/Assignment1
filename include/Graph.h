#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>

class Graph{
public:
    Graph(std::vector<std::vector<int>> matrix);
    
    void infectNode(int nodeInd);
    bool isInfected(int nodeInd);
private:
    std::vector<std::vector<int>> edges;//removed one > after <int>> that was placed there for no reason (Yair)
};

#endif
