#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
};
Node* getNode(int key){
   Node *newNode = new Node();
   newNode->data = key;
   newNode->next = NULL;
   return newNode;
}
void insert(Node **start, int data){
   Node *current = *start;
   Node *newNode = getNode(data);
   if(*start == NULL){
      newNode->next = newNode;
      *start = newNode;
      return;
   }
   while (current->next != *start) {
      current = current->next;
   }
   newNode->next = *start;
   current->next = newNode;
}
void displayList(Node *start){
   Node* current = start;
   if (start == NULL) {
      cout << "Display List is empty";
      return;
   } else {
      do {
         cout << current->data << " ";
         current = current->next;
      }
       while (current != start);
   }
   cout << endl;
}
void getMinMax(Node **start){
   if(*start == NULL){
      return;
   }
   Node* current;
   current = *start;
   int min = INT_MAX, max = INT_MIN;
   while (current->next != *start) {
      if (current->data < min) {
         min = current->data;
      }
      if (current->data > max) {
         max = current->data;
      }
      current = current->next;
   }
   cout << "Minimum: " << min << ", Maximum: " << max;
}
int main() {
   int data[] = {99, 11, 22, 10, 44, 55, 66};
   int n = sizeof(data)/sizeof(data[0]);
   Node *start = NULL;
   for(int i = 0; i<n; i++){
      insert(&start, data[i]);
   }
   displayList(start);
   getMinMax(&start);
}
