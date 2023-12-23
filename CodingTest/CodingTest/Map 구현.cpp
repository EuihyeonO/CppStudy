#include <map>


template <typename T>
class MyMap
{

private:
	enum class NodeColor : char
	{
		Red,
		Black,
	};

	struct Node
	{
		T Data;

		NodeColor Color = NodeColor::Black;

		Node* Parent = nullptr;
		Node* LeftChild = nullptr;
		Node* RightChild = nullptr;
	};

public:
	MyMap() {}
	~MyMap() {}

public:

	void insert(const T& _Data)
	{
		Node* NewNode = nullptr;

		//사이즈가 0이면, 루트노드로 설정
		if (Size == 0)
		{
			NewNode = new Node();
			NewNode->Data = _Data;

			RootNode = NewNode;
			RootNode->Color = NodeColor::Black;
			
			Size++;

			return;
		}
		
		else
		{
			Node* CurNode = RootNode;
			
			//삽입
			while (true)
			{
				//데이터가 같다면, 데이터만 바꾸고 끝.
				if (_Data == CurNode->Data)
				{
					CurNode->Data = _Data;
					return;
				}
				//데이터가 더 작다면, 해당 노드의 왼쪽노드를 탐색.
				else if (_Data < CurNode->Data)
				{
					//노드의 왼쪽 노드가 nullptr이면, 새로 들어온 노드를 왼쪽 노드로 설정.
					if (CurNode->LeftChild == nullptr)
					{
						NewNode = new Node();
						NewNode->Data = _Data;
						NewNode->Parent = CurNode;
						NewNode->Color = NodeColor::Red;
						
						CurNode->LeftChild = NewNode;

						Size++;

						break;
					}
					else
					{
						CurNode = CurNode->LeftChild;
						continue;
					}
				}
				else if (_Data > CurNode->Data)
				{
					//노드의 오른족 노드가 nullptr이면, 새로 들어온 노드를 오른쪽 노드로 설정.
					if (CurNode->RightChild == nullptr)
					{
						NewNode = new Node();

						NewNode->Data = _Data;
						NewNode->Parent = CurNode;
						NewNode->Color = NodeColor::Red;

						CurNode->RightChild = NewNode;

						Size++;

						break;
					}
					else
					{
						CurNode = CurNode->RightChild;
						continue;
					}
				}
			}

			//정렬
			NodeSort(NewNode);
		}
	}
	
private:
	void NodeSort(Node& _NewNode)
	{
		Node* CurNode = _NewNode;
		Node* ParentNode = _NewNode->Parent;
		Node* UncleNode = ParentNode->RightChild;

		//Restructing
		if (UncleNode->Color == NodeColor::Black)
		{

		}

		//Recoloring
		else if(UncleNode->Color == NodeColor::Red)
		{

		}

	}

private:
	Node* RootNode = nullptr;
	size_t Size = 0;
};


int main()
{

	MyMap<int> NewMap;
	return 0;
}