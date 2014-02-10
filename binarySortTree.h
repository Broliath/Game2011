template <class T> class binarySortTree
{
	private: 
	public:
		int countNodes(node*);
		void preorderPrint(node*);
		void postorderPrint(node*);
		void inorderPrint(node*);
		bool checkTree(int, node*);
		void insert(int, node*);
}

class <class T> class node
{
	private:
		node* leftNode;
		node* rightNode;
		T item;
}
