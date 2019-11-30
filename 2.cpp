#include <iostream>
using namespace std;

class byteland
{
public:
    int citizens[5] = {1,2,3,4,5};
    int enemy[5][5] = {{0,1,1,1,1},{1,0,0,1,1},{1,0,0,0,0},{1,1,0,0,0},{1,1,0,0,0}};//the matrix of enemy relationship
};

struct node
{
    int level = 0;
    int trace[5]={0};

    node* left;
    node* right;
    node():left(NULL),right(NULL){}

};

bool conFunc(byteland BL, int rank){
    if (BL.enemy[rank][rank + 1] == 1) return false;//当二者为仇敌时退出返回false
    else return true;
};

bool bndFunc(byteland BL, node cuNode, int bestNum){
    if (sumOfTrace(cuNode) + (sizeof(BL.citizens) - (cuNode.level + 1)) <= bestNum) return false;//当不会出现更优解时退出返回false
    else return true;
};

int* solution(byteland BL){//完善该部分代码，需要做到1.bestNum的记录2.结束条件3.返回值对应的情况
    node rootNode;
    node cuNode;
    int** bestTrc;//记录最佳路径
    int cuNum = 0;//当前trace和
    int bestNum = 0;//当前最优人数

    while(true){
        if (cuNode.level != sizeof(BL.citizens) && conFunc(BL,cuNode.level) && bndFunc(BL, cuNode, bestNum)){
            cuNode.left = new node;
        }
        if (cuNode.level == sizeof(BL.citizens)) bestTrc = cuNode.trace;
    }
};

int sumOfTrace(node Node){
    int cuNum;
    for(int i = 0; i < Node.level;i++){//计算当前trace上的和
        cuNum += Node.trace[i];
    } 
    return cuNum;
}

bndFunc(BL, cuNode, cuNum, bestNum)
int main()
{
    node rootNode
    node cuNode;
    byteland myBL;
    int bestRst = 0;
    int cuNum = 0;
    int reNum = 0;

}