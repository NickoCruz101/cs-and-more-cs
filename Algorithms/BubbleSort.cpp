#include <iostream>
#include <vector>
#include <algorithm>
#include "../Linked_List/LinkedList.h"
using std::vector; using std::string;
using std::swap; using std::cout;
using std::endl;


void bubbleSort(LinkedList* l);

void bubbleSort(int arr[], int n);


int main()
{
  vector<int> vec = {44, 21, 65, 23, 34};
  int arr[6] = {345, 223, 143, 89, 632, 45};
  vector<int> vec_B = {44,3};

  LinkedList *list = new LinkedList();
  list->create(vec);

  LinkedList* list_B = new LinkedList();
  list_B->create(vec_B);
  Node* a = list_B->getHead();
  Node* b = a->next;
  list_B->swap(a,b);
  list_B->print();
}


void bubbleSort(LinkedList *l)
{
  Node* iter = l->getHead();
  while(iter->next){
    if(iter->getValue() > iter->next->getValue()){
      swap(iter,iter->next);
    }
  }
}

void bubbleSort(int arr[], int n)
{

  int i;
  int j;

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}