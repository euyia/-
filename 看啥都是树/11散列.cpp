#include <iostream>
#include <stdlib.h>
#include <cmath>
#define MAXx 10000
typedef int Index;
typedef int ElementType;
typedef Index Position;
typedef enum
{
  Legitimate,
  Empty,
  Delated
} EntryType;
typedef struct HashEntry *Cell;
struct HashEntry
{
  ElementType Data;
  EntryType Info;
};
typedef struct HashTbl *HashTable;
struct HashTbl
{
  int TableSize;
  Cell cells;
};
using namespace std;

int NextPrime(int n)
{
  int i;
  int p = (n % 2) ? n + 2 : n + 1;
  while (p <= MAXx)
  {

    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
bool isprime(int n)
{
  if (n <= 3)
    return n > 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}
// ok
int NextPrime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {

    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {

    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
int nextprime(int n)
{
  int p = (n % 2) ? n + 2 : n + 1;
  int i;
  while (p < MAXx)
  {
    for (i = (int)sqrt(p); i > 2; i--)
      if (!(p % i))
        break;
    if (i == 2)
      break;
    p += 2;
  }
  return p;
}
HashTable create(int tablesize)
{
  HashTable h;
  int i;
  h = (HashTable)malloc(sizeof(struct HashTbl));
  h->TableSize = NextPrime(tablesize);
  h->cells = (Cell)malloc(sizeof(struct HashEntry));
  for (int i = 0; i < h->TableSize; i++)
    h->cells[i].Info = Empty;
  return h;
}
HashTable create(int tablesize)
{
  HashTable h;
  int i;
  h = (HashTable)malloc(sizeof(struct HashTbl));
  h->TableSize = nextprime(tablesize);
  h->cells = (Cell)malloc(sizeof(struct HashEntry));
  for (i = 0; i < h->TableSize; i++)
    h->cells[i].Info = Empty;
  return h;
}
HashTable create(int tablesize)
{
  HashTable h;
  int i;
  h = (HashTable)malloc(sizeof(struct HashTbl));
  h->TableSize = nextprime(tablesize);
  h->cells = (Cell)malloc(sizeof(struct HashEntry));
  for (i = 0; i < h->TableSize; i++)
    h->cells[i].Info = Empty;
  return h;
}
Index Hash(int key, int tablesize)
{
  return key % tablesize;
}
Position Find(HashTable h, ElementType key)
{
  Position currpos, newpos;
  int cnum = 0;
  currpos = newpos = Hash(key, h->TableSize);
  while (h->cells[newpos].Info != Empty && h->cells[newpos].Data != key)
  {
    if (++cnum % 2)
    {
      newpos = currpos + (cnum + 1) / 2 * (cnum + 1) / 2;
      while (h->TableSize <= newpos)
        newpos %= h->TableSize;
    }
    else
    {
      newpos = currpos - cnum / 2 * cnum / 2;
      while ((newpos < 0))
        newpos += h->TableSize;
    }
  }
  return newpos;
}
Position Find(HashTable h, ElementType key)
{
  Position currpos, newpos;
  int cnum = 0;
  currpos = newpos = Hash(key, h->TableSize);
  while (h->cells[newpos].Info != Empty && h->cells[newpos].Data != key)
  {
    if (++cnum % 2)
    {
      newpos = currpos + (cnum + 1) / 2 * (cnum + 1) / 2;
      while (h->TableSize <= newpos)
        newpos %= h->TableSize;
    }
    else
    {
      newpos = currpos - cnum / 2 * cnum / 2;
      while (newpos < 0)
        newpos += h->TableSize;
    }
  }
  return newpos;
}
Position Find(HashTable h, ElementType key)
{
  Position currpos, newpos;
  int cnum = 0;
  currpos = newpos = Hash(key, h->TableSize);
  while (h->cells[newpos].Data != key && h->cells[newpos].Info != Empty)
  {
    if (++cnum % 2)
    {
      newpos = currpos + (cnum + 1) / 2 * (cnum + 1) / 2;
      while (h->TableSize <= newpos)
        newpos %= h->TableSize;
    }
    else
    {
      newpos = currpos - cnum / 2 * cnum / 2;
      while (newpos < 0)
        newpos += h->TableSize;
    }
  }
  return newpos;
}
Position find(HashTable h, ElementType key)
{
  Position currpos, newpos;
  int cnum = 0;
  currpos = newpos = Hash(key, h->TableSize);
  while (h->cells[newpos].Data != key && h->cells[newpos].Info != Empty)
  {
    if (++cnum % 2)
    {
      newpos = currpos + (cnum + 1) / 2 * (cnum + 1) / 2;
      while (h->TableSize <= newpos)
        newpos -= h->TableSize;
    }
    else
    {
      newpos = currpos - cnum / 2 * cnum / 2;
      while (newpos < 0)
        newpos += h->TableSize;
    }
  }
  return newpos;
}
bool insert(HashTable h, ElementType key, int i)
{
  Position pos = i;
  pos = find(h, key);
  if (h->cells[pos].Data != Legitimate)
  {
    h->cells[pos].Data = key;
    h->cells[pos].Info = Legitimate;
    return true;
  }
  else
    return false;
}
Position find(HashTable h, ElementType key)
{
  Position currpos, newpos;
  int cnum = 0;
  currpos = newpos = Hash(key, h->TableSize);
  while (h->cells[newpos].Info != Empty && h->cells[newpos].Data != key)
  {
    if (++cnum % 2)
    {
      newpos = currpos + (cnum + 1) / 2 * (cnum + 1) / 2;
      while (newpos >= h->TableSize)
        newpos -= h->TableSize;
    }
    else
    {
      newpos = currpos - (cnum) / 2 * cnum / 2;
      while (newpos < 0)
        newpos += h->TableSize;
    }
  }
  return newpos;
}
Position find(HashTable h,ElementType key)
{
  Position curpos,newpos;
  int num=0;
  curpos=newpos=Hash(key,h->TableSize);
  while(h->cells[newpos].Info!=Empty&&h->cells[newpos].Data!=key)
  {
    if(++num%2){
      newpos=curpos+(num+1)/2*(num+1)/2;
      while(newpos>=h->TableSize)
      newpos-=h->TableSize;
    }
    else
{
  newpos=curpos-(num)/2*num/2;
  while(newpos<0)
  newpos+=h->TableSize;
}
  }
  return newpos;
}
Position find(HashTable h,ElementType key)
{
  Position newpos,curpos;
  newpos=curpos=Hash(key,h->TableSize);
  int n=0;
  while(h->cells[newpos].Info!=Empty&&h->cells[newpos].Data!=key)
  {
if(++n%2)
{
  newpos=curpos+(n+1)/2*(n+1)/2;
  while(newpos>=h->TableSize)
  newpos-=h->TableSize;
}
else
{
  newpos=curpos-n/2*n/2;
  while(newpos<0)
  newpos+=h->TableSize;
}
  }
  return newpos;
}
