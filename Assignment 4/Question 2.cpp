#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *ptr;
    int top;

public:
    
    Stack(int size = 5)
    {
        this->size = size;
        top = -1;
        ptr = new int[size]; 
    }

    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }

    
    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack is full. will not push: "<<element<<endl;
            return;
        }
        ptr[++top] = element;
        
    }

    
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop.";
            return -1; 
        }
            return ptr[top--];
    }

    
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Nothing to peek." << endl;
            return -1;
        }
        else
        {
            return ptr[top];
        }
    }

    
    bool isEmpty()
    {
        return top == -1;
    }

    
    bool isFull()
    {
        return top == size - 1;
    }

    
    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s(5);  

    s.push(2);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(10);
    s.push(20); 

    s.print();  

    cout << "Popped element: " << s.pop() << endl;
    s.print();

    cout << "Peek element: " << s.peek() << endl;

    return 0;
}
