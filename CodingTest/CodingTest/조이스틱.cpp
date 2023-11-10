#include <string>
#include <vector>
#include <queue>

/*
이 문제를 순수 그리디로만 해결하면 해결이 안되는 반례가 있음.

그리디 알고리즘으로만 해결한다면, 현재 왼쪽으로 이동하는 횟수가 2번, 오른쪽이 3번이라면
왼쪽으로 이동한걸로 연산했을 때, 무조건 최적의 해가 나와야 하는데, 그렇지 않은 반례 존재.

즉 왼쪽 이동과 오른쪽 이동은 횟수에 상관 없이 둘 다 비교해야 하기 때문에 BFS로 풀이.

위아래이동은 그리디, 왼쪽 오른쪽은 BFS. 

*/
using namespace std;

struct Node
{
    std::string Name;
    int Count;
    int Index;
};

int solution(string name)
{
    std::queue<Node> Nodes;

    std::string MyName;
    MyName.resize(name.size(), 'A');

    Node NewNode;
    NewNode.Name = MyName;
    NewNode.Count = 0;
    NewNode.Index = 0;

    Nodes.push(NewNode);

    int MinCount = -1;

    while (Nodes.size() > 0)
    {
        Node CurNode = Nodes.front();
        Nodes.pop();

        if (CurNode.Name == name)
        {
            if (MinCount == -1)
            {
                MinCount = CurNode.Count;
            }
            else
            {
                MinCount = min(MinCount, CurNode.Count);
            }

            continue;
        }

        //현재 인덱스의 문자가 다르다면?
        if (CurNode.Name[CurNode.Index] != name[CurNode.Index])
        {
            int AsciiGap = abs(CurNode.Name[CurNode.Index] - name[CurNode.Index]);
            //위쪽 방향키와 아럐쪽 방향키중 횟수가 더 적은 것.            
            int Count = min(AsciiGap, 26 - AsciiGap);
            //누른 횟수만큼 더해줌.            
            CurNode.Count += Count;
            //문자를 바꾸고 , 인덱스는 변화x
            CurNode.Name[CurNode.Index] = name[CurNode.Index];

            Nodes.push(CurNode);

            continue;
        }
        else
        {
            int NameSize = name.size();

            //오른쪽으로 키를 움직인다면?
            int Index = CurNode.Index;
            int Count = 0;

            while (CurNode.Name[Index] == name[Index])
            {
                Index++;
                Count++;

                if (Index >= NameSize)
                {
                    Index -= NameSize;
                }
            }

            Node NewRightNode;
            NewRightNode.Name = CurNode.Name;
            NewRightNode.Index = Index;
            NewRightNode.Count = CurNode.Count + Count;

            Nodes.push(NewRightNode);

            //왼쪽으로 간다면?
            Index = CurNode.Index;
            Count = 0;

            while (CurNode.Name[Index] == name[Index])
            {
                Index--;
                Count++;

                if (Index < 0)
                {
                    Index += NameSize;
                }
            }

            Node NewLeftNode;
            NewLeftNode.Name = CurNode.Name;
            NewLeftNode.Index = Index;
            NewLeftNode.Count = CurNode.Count + Count;

            Nodes.push(NewLeftNode);
        }
    }

    return MinCount;
}

//int main()
//{
//    return 0;
//}