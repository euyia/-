#include<list>
using namespace std;
struct ListNode
{int val;
  ListNode* next;
  ListNode(int x):val(x),next(NULL){}
};
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(-1);
  ListNode*rear=result;
  while(p&&q)
  {
    if(p->val<=q->val)
    {
      rear=rear->next=q;
      q=q->next;
    }
    else
    {
      rear=rear->next=p;
      p=p->next;
    }
  }
  rear->next=p!=nullptr?p:q;
  return result->next;
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(-1);
  ListNode*rear=result;
  while(q&&p)
  {
    if(p->val<=q->val)
    {
      rear=rear->next=p;
      p=p->next;
    }
    else
    {
      rear=rear->next=q;
      q=q->next;
    }
  }
  rear->next=q!=nullptr?q:p;
  return result->next;
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(-1);
  ListNode*rear=result;
  while(q&&p)
  {
    if(p->val<=q->val)
    {
      rear=rear->next=p;
      p=p->next;
    }
    else
    {
      rear=rear->next=p;
      p=p->next;
    }
    rear->next=p!=nullptr?p:q;
    return result->next;
  }
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(-1);
  ListNode*rear=result;
  while(q&&p)
  {
    if(p->val<=q->val)
    {
      rear=rear->next=p;
      p=p->next;
    }
    else
    {
      rear=rear->next=q;
      q=q->next;
    }
    rear->next=q!=nullptr?q:p;
    return result->next;
  }
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(0);
  ListNode*rear=result;
  while(q&&p)
  {
    if(q->val<=p->val)
    {
      rear=rear->next=q;
      q=q->next;
    }
    else
    {
      rear=rear->next=p;
      p=p->next;
    }
    rear->next=q!=nullptr?q:p;
    return result->next;
  }
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(0);
  ListNode*rear=result;
  while(q&&p)
  {
    if(q->val<=p->val)
    {
      rear=rear->next=q;
      q=q->next;
    }
    else
    {
      rear=rear->next=p;
      p=p->next;
    }
    rear->next=p!=NULL?p:q;
    return result->next;
  }
}
ListNode*merge(ListNode*p,ListNode*q)
{
  ListNode*result=new ListNode(-1);
  ListNode*rear=result;
  while(q&&p)
  {
    if(q->val<=p->val)
    {
      rear=rear->next=q;
      q=q->next;
    }
    else
    {
      rear=rear->next=p;
      p=p->next;
    }
    rear->next=q!=nullptr?q:p;
    return result->next;
  }
}


ListNode* merge(ListNode*heada,ListNode*headb)
{
  ListNode*p=heada,*q=headb;
  if(q==p)return q;
  while(q!=p)
  {
    q=q==nullptr?headb:q->next;
    p=p==nullptr?heada:p->next;
  }
  return q;
}

