#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode *BinTree;
struct TreeNode
{
	int Data;	   // 存值
	BinTree Left;  // 左儿子结点
	BinTree Right; // 右儿子结点
};
BinTree CreatBinTree(); // 创建一个二叉树
// int IsEmpty(BinTree BT);						 // 判断树 BT 是否为空
void PreOrderTraversal(BinTree BT);	 // 先序遍历，根左右
void InOrderTraversal(BinTree BT);	 // 中序遍历，左根右
void PostOrderTraversal(BinTree BT); // 后序遍历，左右根

typedef struct SNode *Stack;
struct SNode
{
	BinTree Data;
	Stack Next;
};

// 初始化
Stack CreateStack()
{
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
}
int IsEmpty(Stack S)
{
	return (S->Next == NULL);
}

// 入栈
void Push(Stack S, BinTree item)
{
	Stack tmp;
	tmp = (Stack)malloc(sizeof(struct SNode));
	tmp->Data = item;
	// 链栈栈顶元素是链表头结点，新入栈的链表在栈顶元素后面
	tmp->Next = S->Next;
	S->Next = tmp;
}

// 出栈
BinTree Pop(Stack S)
{
	Stack First;
	BinTree TopVal;
	if (IsEmpty(S))
	{
		printf("堆栈空");
		return 0;
	}
	else
	{
		First = S->Next;	   // 出栈第一个元素在栈顶元素后面
		S->Next = First->Next; //把第一个元素从链栈删除
		TopVal = First->Data;  // 取出被删除结点的值
		free(First);		   // 释放空间
		return TopVal;
	}
}
// 这个是弄个数据进去。。返回一个带data的树节点而已。
BinTree Insert(int Data)
{
	BinTree BT;
	BT = (BinTree)malloc(sizeof(struct TreeNode));
	BT->Data = Data;
	BT->Left = NULL;
	BT->Right = NULL;
	return BT;
}

// 初始化二叉树
BinTree CreatBinTree()
{
	BinTree BT;
	BT = (BinTree)malloc(sizeof(struct TreeNode));
	BT->Data = 1;
	BT->Left = Insert(2);
	BT->Right = Insert(3);
	BT->Left->Left = Insert(4);
	BT->Left->Right = Insert(6);
	BT->Left->Right->Left = Insert(5);
	BT->Right->Left = Insert(7);
	BT->Right->Right = Insert(9);
	BT->Right->Left->Right = Insert(8);
	return BT;
}
// _______________________________________________前面都是铺垫。
// 下面就是主菜。
void preTraversal(BinTree bt)
{
	BinTree t = bt;
	Stack s = create();
	while (t || !IsEmpty(s))
	{
		while (t)
		{
			Push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!IsEmpty(s))
		{
			t = Pop(s);
			t = t->Right;
		}
	}
}
// 它就是把根节点存起来。。pop的时候 又会去范文它的 右节点。。二维变一维。！！！
void pretraversal(BinTree bst)
{
	BinTree t;
	Stack s = craete();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (IsEmpty(s))
		{
			t = Pop(s);
			t = t->Right;
		}
	}
}
// 这样都能访问到。。但是怎么判断不会重复访问呢。。？？？？？
// 会碰到三次。。其实是重复的。。但是它这边限定了。访问的这个动作的时机。。就变成唯一了。
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || isemtp(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!IsEmpty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!IsEmpty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
// 抓住想象的东西。缺的是那个。。t就是一个临时指针。里面存的是什么地址 。就是指向谁。。
// t没了 就是表示走到底了。。
// empty 就表示原来存的还没有走过的根节点也没了。。也就是全部都范文过了。
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isemtpy(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pere(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isetmptu(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pree(BinTree bst)
{
	BinTree t;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isemtpy(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isemtpy(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !IsEmpty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
// 是一个临时指针行走的一个路线控制。。。
void pre(BinTree bst)

{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isemptu(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
// 就是临时指针的游走。。先left走完。。然后根节点记录的right走完。。就走遍了。。
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void PreOrderTraversal(BinTree BT)
{
	if (BT)
	{
		printf("%d", BT->Data);		  // 打印根
		PreOrderTraversal(BT->Left);  // 进入左子树
		PreOrderTraversal(BT->Right); // 进入右子树
	}
}
void pre(BinTree bst)
{
	if (bst)
	{
		printf("%d", bst->Data);
		pre(bst->Left);
		pre(bst->Right);
	}
}
// 递归写法 是简单到夸张。。
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
// 把力气花在打开。。不是展示的时候 用力。。展示的时候就很优雅了。。
// 感觉自己想事情 越来越清晰了。
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		push(s, t);
		printf("%d", t->Data);
		t = t->Left;
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}

void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	if (bst)
	{
		printf("%d", bst->Data);
		pre(bst->Left);
		pre(bst->Right);
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t && !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t && !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{

			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{

			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
	}
	if (!isempty(s))
	{
		t = pop(s);
		t = t->Right;
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !isempty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}
void pre(BinTree bst)
{
	BinTree t = bst;
	Stack s = create();
	while (t || !IsEmpty(s))
	{
		while (t)
		{
			push(s, t);
			printf("%d", t->Data);
			t = t->Left;
		}
		if (!isempty(s))
		{
			t = pop(s);
			t = t->Right;
		}
	}
}