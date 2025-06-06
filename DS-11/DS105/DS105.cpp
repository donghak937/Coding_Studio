#include <iostream>
using namespace std;

struct node{
    int score;
    string name;
    struct node *next;
};

struct node* start = NULL;
struct node* last = NULL;

void swapNode(struct node *x, struct node *y)
{
    int temp = x->score;
    x->score = y->score;
    y->score = temp;
}

struct node* createNode(int x, string name)
{
    struct node* newNode = new node;
    newNode->score = x;
    newNode->name = name;
    newNode->next = NULL;
    return newNode;
}

void addLast(int y, string name)
{
    struct node* newNode = createNode(y, name);
    if(start == NULL)
    {
        start = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }
}

void printLinked()
{
    int count = 1;
    struct node* temp = start;
    while(temp->next != NULL)
    {
        cout << count++ << " > " << temp->score << " " << temp->name << endl;
        temp = temp->next;
    }
    cout << count++ << " > " << temp->score << " " << temp->name;
}

void clearLinked(){   
    struct node* temp ;
    while(start != NULL) {
        temp = start;
        start = start->next;
        free(temp);
    }
    start = NULL; last = NULL;
}

void init(int size)
{
    int number;
    string name;
    clearLinked();
    for(int i = 0; i < size; i++ )
    {
        cin >> number;
        cin >> name;
        addLast(number, name);
    }
}

void bubbleLinked()
{
    struct node* i;
    struct node* j;
    
    i = start;

    for(i; i != NULL; i = i->next){
        for(j = i; j != NULL; j = j->next){
            if ((j->next != NULL) && (j->score < j->next->score)){
                swapNode(j, j->next);
            }
        }
    }
}

int main()
{
    int choice;

    cin >> choice;
    init(choice);
    bubbleLinked();
    printLinked();
    
}