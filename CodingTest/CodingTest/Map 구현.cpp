#include <map>
#include <iostream>

//typedef int T;


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
		Node* LeftChild = NilNode;
		Node* RightChild = NilNode;
	};

	static Node* NilNode;

public:
	MyMap() 
	{
		CreateNilNode();
	}

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
					if (CurNode->LeftChild == NilNode)
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
					if (CurNode->RightChild == NilNode)
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
			if (NewNode->Parent == nullptr)
			{
				return;
			}

			try
			{
				if (NewNode->Parent == NilNode){ throw NewNode; }

				ReBuilding(NewNode);
			}

			//NilNode와 nullptr을 함께 사용한 이유는, 루트 노드와 말단 노드를 구분하기 위해서.
			catch (Node* ErrorNode)
			{
				ErrorNode;
				std::cout << "NilNode는 부모가 될 수 없습니다." << std::endl;
			}

		}
	}

	//Debug
	void OutPut(Node* _Node)
	{
		if (_Node == NilNode)
		{
			return;
		}

		OutPut(_Node->LeftChild);
		std::cout << _Node->Data << " ";
		std::cout << static_cast<int>(_Node->Color) << std::endl;
		OutPut(_Node->RightChild);
	}

private:
	void LeftRotate(Node* _ParentNode)
	{
		Node* LeftChild = _ParentNode->LeftChild;
		Node* RightChild = _ParentNode->RightChild;

		if (RightChild != NilNode) 
		{
			_ParentNode->RightChild = RightChild->LeftChild;
			
			if(RightChild->LeftChild != NilNode)
			{
				RightChild->LeftChild->Parent = _ParentNode;
			}

			RightChild->Parent = _ParentNode->Parent;

			if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->LeftChild)
			{
				_ParentNode->Parent->LeftChild = RightChild;
			}
			else if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->RightChild)
			{
				_ParentNode->Parent->RightChild = RightChild;
			}

			_ParentNode->Parent = RightChild;
			RightChild->LeftChild = _ParentNode;

			if (RightChild->Parent == nullptr)
			{
				RootNode = RightChild;
			}
		}
	}

	void RightRotate(Node* _ParentNode)
	{
		Node* LeftChild = _ParentNode->LeftChild;
		Node* RightChild = _ParentNode->RightChild;

		if (LeftChild != NilNode)
		{
			_ParentNode->LeftChild = LeftChild->RightChild;

			if (LeftChild->RightChild != NilNode)
			{
				LeftChild->RightChild->Parent = _ParentNode;
			}

			LeftChild->Parent = _ParentNode->Parent;

			if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->LeftChild)
			{
				_ParentNode->Parent->LeftChild = LeftChild;
			}
			else if (_ParentNode->Parent != nullptr && _ParentNode == _ParentNode->Parent->RightChild)
			{
				_ParentNode->Parent->RightChild = LeftChild;
			}

			_ParentNode->Parent = LeftChild;
			LeftChild->RightChild = _ParentNode;

			if (LeftChild->Parent == nullptr)
			{
				RootNode = LeftChild;
			}
		}
	}

	void ReBuilding(Node* _CurNode)
	{
		Node* ParentNode = nullptr;
		Node* AncestorNode = nullptr;
		Node* UncleNode = nullptr;

		Node* CurNode = _CurNode;

		while(true)
		{
			if (CurNode == RootNode)
			{
				RootNode->Color = NodeColor::Black;
				break;
			}

			if (CurNode->Parent == RootNode)
			{
				break;
			}

			ParentNode = CurNode->Parent;
			AncestorNode = ParentNode->Parent;

			if (!(CurNode->Color == NodeColor::Red && ParentNode->Color == NodeColor::Red))
			{
				break;
			}

			if (ParentNode == AncestorNode->LeftChild)
			{
				UncleNode = AncestorNode->RightChild;
			}
			else if (ParentNode == AncestorNode->RightChild)
			{
				UncleNode = AncestorNode->LeftChild;
			}
			else
			{
				return;
			}

			if (UncleNode->Color == NodeColor::Black)
			{
				ReStructing(CurNode, ParentNode, AncestorNode);
			}
			else if (UncleNode->Color == NodeColor::Red)
			{
				ReColoring(CurNode);

				CurNode = AncestorNode;
			}
		}
	}

	void ReStructing(Node* _CurNode, Node* _ParentNode, Node* _AncestorNode)
	{
		if (_ParentNode == nullptr)
		{
			return;
		}

		if (_AncestorNode == nullptr)
		{
			return;
		}

		if (_ParentNode == _AncestorNode->LeftChild)
		{
			if (_CurNode == _ParentNode->RightChild)
			{
				LeftRotate(_ParentNode);

				//왼쪽회전 진행하면서, 부모노드와 현재노드의 관계가 바뀜.
				Node* Temp = _CurNode;
				_CurNode = _ParentNode;
				_ParentNode = Temp;

			}

			_ParentNode->Color = NodeColor::Black;
			_AncestorNode->Color = NodeColor::Red;

			RightRotate(_AncestorNode);
		}

		else if (_ParentNode == _AncestorNode->RightChild)
		{
			if (_CurNode == _ParentNode->LeftChild)
			{
				RightRotate(_ParentNode);

				//왼쪽회전 진행하면서, 부모노드와 현재노드의 관계가 바뀜.
				Node* Temp = _CurNode;
				_CurNode = _ParentNode;
				_ParentNode = Temp;

			}

			_ParentNode->Color = NodeColor::Black;
			_AncestorNode->Color = NodeColor::Red;

			LeftRotate(_AncestorNode);
		}
	}

	void ReColoring(Node* _CurNode)
	{
		Node* ParentNode = _CurNode->Parent;
		Node* AncestorNode = ParentNode->Parent;
		Node* UncleNode = nullptr;
		//정상적인 상황이라면, 조상노드까지 nullptr일 수 없다.
		//루트 노드는 항상 검은색이라, 2~3층 이후부터만 이중 레드 충돌이 발생하기 때문.
		if (ParentNode == nullptr || AncestorNode == nullptr)
		{
			return;
		}

		//루트노드가 들어오면 그냥 색만 바꾸고 종료.
		if (_CurNode == RootNode)
		{
			_CurNode->Color = NodeColor::Black;
			return;
		}

		ParentNode->Color = NodeColor::Black;
		AncestorNode->Color = NodeColor::Red;

		if (ParentNode == AncestorNode->LeftChild)
		{
			UncleNode = AncestorNode->RightChild;
		}
		else if (ParentNode == AncestorNode->RightChild)
		{
			UncleNode = AncestorNode->LeftChild;
		}
		else
		{
			return;
		}

		if (UncleNode != NilNode)
		{
			UncleNode->Color = NodeColor::Black;
		}

		_CurNode = AncestorNode;
	}

	void CreateNilNode()
	{
		NilNode = new Node();
		NilNode->Color = NodeColor::Black;
	}

public:
	Node* RootNode = nullptr;
private:
	size_t Size = 0;
};

template <typename T>
MyMap<T>::Node* MyMap<T>::NilNode = nullptr;

int main()
{

	MyMap<int> NewMap;
	NewMap.insert(13);
	NewMap.insert(16);
	NewMap.insert(103);
	NewMap.insert(5);
	NewMap.insert(1114);
	NewMap.insert(1);
	NewMap.insert(10);
	NewMap.insert(3);
	NewMap.insert(22);
	NewMap.insert(8);
	NewMap.insert(1111);
	NewMap.insert(9);
	NewMap.insert(11);
	NewMap.insert(12);


	NewMap.OutPut(NewMap.RootNode);
	return 0;
}