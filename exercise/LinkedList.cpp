#include "LinkedList.hpp"

using namespace std;


// Search for a specified key and return a pointer to that node
//MANDETORY_TODO: complete this function
// Given the key this function will find the node where the key is present
// If found it will return the node, else NULL
Node* LinkedList::searchList(int key) {

    Node* ptr = NULL;

    ptr = head;
    while(ptr != nullptr)
    {
        if(ptr->key == key)
        {
          return ptr;
        }
    }
    return NULL;
}


// Add a new node to the list
//MANDETORY_TODO: complete this function
// This function will add a node with newKey after the prev node in the linked list
// if prev is null insertion is to be made at head
void LinkedList::insert(Node* prev, int newKey){

  //Check if head is Null i.e list is empty
  Node* node = new Node();
  node->key = newKey;
  node->next = head;
  if(head == nullptr)
  {
      head = node;
  }
  


  // if list is not empty, look for prev and append our node there
   if(node != nullptr)
  {
    prev->next = node;
  }
  //general insertion
  else
  {

    while(node != nullptr)
    {
        prev->next = node;

    }




  }
}


// OPTIONAL_TODO: GOLD PROBLEM
// Swap the first and last nodes (don't just swap the values). Swap the Nodes
bool LinkedList::swapFirstAndLast()
{
    bool isSwapped = false;

    return isSwapped;
}

// Print the keys in your list
void LinkedList::printList(){
  Node* temp = head;

  while(temp->next != NULL){
    cout<< temp->key <<" -> ";
    temp = temp->next;
  }

  cout<<temp->key<<endl;
}
